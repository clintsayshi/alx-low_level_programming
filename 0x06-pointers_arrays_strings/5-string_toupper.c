#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 **string_toupper - change to uppercase
 * @s: a string
 * Description: changes all lowercase letters of a string to uppercase
 * Return: string in uppercase
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (isalpha(s[i]))	
			s[i] = toupper(s[i]);

		i++;

	}

	return (s);
}
