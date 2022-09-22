#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 **string_cap - change to uppercase
 * @s: a string
 * Description: changes all lowercase letters of a string to uppercase
 * Return: string in uppercase
 */

char *string_cap(char *s)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		*(s + i) = toupper(*(s + i));
	}


	return (s);
}
