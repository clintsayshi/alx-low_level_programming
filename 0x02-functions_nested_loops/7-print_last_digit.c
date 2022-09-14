#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Last digit
 * @n: integer value
 * Description: prints the last digit of a number
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	_putchar(abs(n) % 10 + '0');
	return (abs(n) % 10);
}
