#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - check is is a digit
 * @c: a char
 * Description: checks for a digit (0 through 9)
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}

	return (0);
}
