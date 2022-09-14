#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: a char value
 * Description: prints the sign of a number
 * Return: 1, 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
