#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @s: source string
 * @c: character to locate in @s
 *
 * Return: character matching @c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (*(s + i));
		i++;
	}
	return (NULL);
}
