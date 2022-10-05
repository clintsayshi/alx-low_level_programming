#include <stdio.h>
/**
 * print_diagsums - prints diagonal sums
 * @a: array to print
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int i;
	int first = 0;
	int sec = 0;

	for (i = 0; i < size; i++)
	{
		first += a[(i * size) + i];
		sec += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", first, sec);
}
