#include <stdio.h>
#include "main.h"
/**
 * print_line - Print a line
 * @n: an integer value
 * Description: draws a straight line in the terminal
 * Return: Void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
