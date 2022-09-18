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
	int num = 612852475143;
	int largest;

	for (i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			int count = 0;
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
					count = count + 1;
			}
			if (count == 0)
				largest = i;
		}
	}

	printf("%d\n", largest);

	return (0);
}
