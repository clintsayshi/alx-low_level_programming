#include <stdio.h>

/**
 * _abs - absolute value
 * @n: integer value
 * Description: computes the absolute value of an integer
 * Return: positive value of n
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (-1 * n);
}
