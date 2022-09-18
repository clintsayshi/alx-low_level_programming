#include <stdio.h>

/**
 * main - Entry point
 * Description:  prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: void
 */

int main(void)
{
	unsigned long i;
	unsigned long prev;
	unsigned long current;
	int counter;

	counter = 0;
	prev = 1;
	i = 2;

	printf("%lu, %lu, ", prev, i);

	while (counter < 96)
	{
		current = prev + i;
		printf("%lu", current);

		if (counter < 95)
			printf(", ");

		prev = i;
		i = current;
		counter++;
	}
	printf("\n");

	return (0);
}
