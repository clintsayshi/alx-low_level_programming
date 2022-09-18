#include <stdio.h>

/**
 * main - Entry point
 * Description:  prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: void
 */

int main(void)
{
	float i;
	float prev;
	float current;
	int counter;

	counter = 2;
	prev = 1;
	i = 2;
	current = prev + i;
	printf("%0.f, %0.f, ", prev, i);

	while (counter < 98)
	{
		/*current = prev + i;*/
		printf("%.0f", current);
		current = prev + i;
		counter++;
		if (counter < 97)
			printf(", ");

		prev = i;
		i = current;
		/*counter++;*/
	}
	printf("\n");

	return (0);
}
