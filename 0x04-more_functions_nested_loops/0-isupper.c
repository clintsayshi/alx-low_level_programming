#include <stdio.h>
/**
 * _isupper - Entry point
 * @c: a character value
 * Description: checks for uppercase character
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if ((int)c < 91)
	{
		return (1);
	}

	return (0);
}
