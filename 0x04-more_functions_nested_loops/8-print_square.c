#include <stdio.h>
#include "main.h"
/**
 * print_square - Prints a square
 * @size: an integer value
 * Description: prints a square, followed by a new line
 * Return: Void
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
	_putchar('\n');
	}
}
