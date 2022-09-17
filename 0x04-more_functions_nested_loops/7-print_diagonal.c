#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Print a diagonal line
 * @n: an integer value
 * Description: draws a diagonal line on the terminal
 * Return: Void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar(' ');
		_putchar('\');
	}
	_putchar('\n');
}
