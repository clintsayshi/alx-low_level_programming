#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string followed by \n
 * @s: string to be printed
 *
 * Return: Void
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(s[i]);
	_puts_recursion(&s[i + 1]);
}
