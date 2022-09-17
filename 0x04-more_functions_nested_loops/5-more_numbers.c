#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Print more numbers
 * Description: prints 10 times the numbers, from 0 to 14
 * Return: Void
 */

void print_char(int c)
{
	_putchar(c + '0');
}

void more_numbers(void)
{
	int num;
	int i;

	for (i = 0; i < 14; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num < 10)
			{
				print_char(num);
			} else
			{
				print_char(num / 10);
				print_char(num % 10);
			}
		}
		_putchar('\n');
	}
}
