#include <stdio.h>
#include "main.h"
/**
 * print_number - Prints a number
 * @n: an integer value
 * Decription: function that prints an integer
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar(45);
		a = -a;
	}

	if ((a / 10) > 0)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
