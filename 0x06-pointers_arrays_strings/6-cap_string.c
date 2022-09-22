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
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && isalpha(s[i]))
		{
			s[i] = toupper(s[i]);
		} else
		{
			if ((i > 1 && s[i - 2] == '\\') && (s[i - 1] == 'n' || s[i - 1] == 't'))
				s[i] = toupper(s[i]);
				
			else if (!isalpha(s[i - 1]) && !isdigit(s[i - 1]))
			{
				s[i] = toupper(s[i]);
			}
		}
		i++;
	}

	return (s);
}
