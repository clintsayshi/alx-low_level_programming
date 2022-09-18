#include <stdio.h>
#include "main.h"
/**
 * main - Prime factors
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long i = 2;

	while (i < num)
	{
		if (num % i == 0)
		{
			num = num / i;
			i = 2;
		} else
			i++;
	}

	printf("%lu\n", num);

	return (0);
}
