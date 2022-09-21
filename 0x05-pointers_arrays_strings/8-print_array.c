#include "main.h"
#include <string.h>
#include <stdlib.h>

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
	int size = sizeof(a) / sizeof(int);

	for (i = 0; i < size; i++)
	{
		printf("%d", *(a + i));

		if (i < size - 1)
			printf(", ");
	}

	_putchar('\n');
}
