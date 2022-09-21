#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array of ints
 * @a: pointer to int array
 * @n: integer variable
 * Description: print n numbers of array a
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i < n - 1)
			printf(", ");
	}

	_putchar('\n');
}
