#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * print_alphabet_x10 - function
 * Description: prints the alphabet, in lowercase x10, followed by a new line
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		print_alphabet();
	}
	_putchar('\n');
}
