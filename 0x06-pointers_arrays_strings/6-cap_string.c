#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 **cap_string - capitalize words
 * @s: a string
 * Description: capitalizes all words of a string.
 * Return: string with words capitalized
 */

char *cap_string(char *s)
{
	int i, j;
	char separators[] = {' ','\t', '\n', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && isalpha(s[i]))
		{
			s[i] = toupper(s[i]);
		} else
		{
			for (j = 0; j < (int)strlen(separators); j++)
			{
				if (s[i - 1] == separators[j])
				{
					s[i] = toupper(s[i]);
				}
			}
		}
		i++;
	}

	return (s);
}
