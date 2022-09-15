#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - print to 98
 * @n: integer value
 * Description: start counting from n to 98
 * Return: Void
 */

void print_to_98(int n)
{
	int i;

	if (n < 0)
		n = 0;
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i < 98)
			printf(", ");
		else
			putchar('\n');
	}
}
