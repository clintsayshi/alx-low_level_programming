#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Print numbers
 * Description: prints the numbers, from 0 to 9, followed by a new line
 * Return: Void
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}

	_putchar('\n');
}
