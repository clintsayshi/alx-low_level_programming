#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * *leet - encodes a string
 * @s: a string
 * Description: encodes a string into 1337
 * Return: a string value
 */

char *leet(char *s)
{
	char chars[] = "aeotl";
	char digits[] = "43071";
	int i, j;

	for (i = 0; i < strlen(s); i++)
	{

		for (j = 0; j < strlen(chars); j++)
		{
			if (s[i] == toupper(chars[j]) || s[i] == chars[j])
			{
				s[i] = digits[j];
			}
		}
	}
	return (s);
}
