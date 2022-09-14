#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - all minutes
 * @n - integer value
 * Description: prints every minute of the day of Jack Bauer
 * Return: last digit of n
 */

void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
