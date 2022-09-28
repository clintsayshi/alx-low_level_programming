#include <stdio.h>

/**
 * *_memset - fill memory with constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of @b bytes to fill @s with
 *
 * Return: @s filled with @b
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
