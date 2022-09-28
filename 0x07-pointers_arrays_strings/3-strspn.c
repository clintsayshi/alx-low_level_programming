#include <string.h>

/**
 * _strspn - gets length of a prefix substring
 * @s: source string
 * @accept: substring to get length prefix of
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, length;

	i = 0;
	length = 0;
	for (i = 0; i < strlen(accept); i++)
	{

		length = length + sizeof(s[i]);


	}

	return (length + sizeof(char));
}
