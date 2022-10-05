#include <stddef.h>
/**
 * *_strpbrk - search string for any set of bytes
 * @s: string to be searched
 * @accept: bytes to search in @s
 *
 * Return: pointer to first byte found or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}

	return (NULL);
}
