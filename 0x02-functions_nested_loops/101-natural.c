#include <stdio.h>

/**
 * main - Entry point
 * Description: computes and prints sum of multiples of 5 ad 3
 * below 1024 (excluded)
 * Return: Always 0
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
	}

	printf("%d\n", sum);

	return (0);
}
