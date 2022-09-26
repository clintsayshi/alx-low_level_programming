#include "main.h"

/**
 * rot13 - ROT13 encoding
 * @s: string to be encoded/decoded
 * Description: encodes a string using rot13
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char result;

	i = 0;
	while (s[i] != '\0')
	{
		result = s[i];

		if (tolower(result) > 'm')
		{
			for (j = 0; j < 12; j++)
			{
				if (tolower(result) < 'z')
				{
					result = result + 1;
				}

				if (tolower(result) == 'z')
				{
					if (isupper(result))
						result = 'A';
					else
						result = 'a';
				}
			}
		} else
		{
			if (isalpha(result))
			{
				result = result + 13;
			}
		}
		s[i] = result;
		i++;
	}
	return (s);
}
