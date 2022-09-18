#include <stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the sum of the even-valued terms
 * Return: void
 */

int main(void)
{
	unsigned long i;
	unsigned long prev;
	unsigned long current;
	unsigned long sum;

	prev = 1; /* F(n - 2) */
	i = 2; /* F(n - 1) */
	sum = i;

	while (i + prev < 4000000)
	{
		current = prev + i;

		if ((current % 2) == 0)
			sum = sum + current;

		prev = i;
		i = current;
	}
	printf("%lu\n", sum);

	return (0);
}
