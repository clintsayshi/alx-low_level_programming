#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - reverse array
 * @a: int array
 * @n: length of the array
 * Description: reverses the content of an array of integers
 * Return: reversed int array
 */

void reverse_array(int *a, int n)
{
	int *temp = (int *)malloc(n * sizeof(int));
	int i;

	for (i = n; i >= 0; i--)
	{
		temp[n - i] = a[i - 1];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
	free(temp);
}
