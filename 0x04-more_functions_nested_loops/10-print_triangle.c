#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Print Triangle
 * @size: integer value
 * Description: prints a triangle, followed by a new line
 * Return: Void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int temp;

	for (i = 1; i <= size; i++)
	{
		temp = size - i;
		for (j = 0; j < temp; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < size - temp; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	/* _putchar('\n'); */
}
