#include <stdio.h>
#include "main.h"
/**
 * main - FizzBuzz
 *
 * Return: Void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");

		else
			printf("%d", i);
		putchar(' ');
	}

	printf("\n");

	return (0);
}