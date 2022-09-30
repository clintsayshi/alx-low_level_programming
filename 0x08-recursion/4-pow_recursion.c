#include "main.h"
/**
 * _pow_recursion - returns x to the power of y
 * @x: base integer in the calculation
 * @y: exponent in the calculation
 *
 * Return: integer value
 */

int _pow_recursion(int x, int y)
{
	int product;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	product = x * _pow_recursion(x, y - 1);

	return (product);
}
