#include "main.h"
#include <string.h>

/**
 * print_rev - print string in reverse
 * @s: pointer to string variable
 * Description: prints a string in reverse, followed by \n
 * Return: void
 */

void print_rev(char *s)
{
	unsigned int i;

	for (i = strlen(s); i > 0; i--)
	{
		_putchar(*(str + (i - 1)));
	}
	_putchar('\n');
}
