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
	unsigned int i, j, length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length = length + 1;
				break;
			}
		}
		if (s[j] == '\0')
			return (length);
	}

	return (length);
}
