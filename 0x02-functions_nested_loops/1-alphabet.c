#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * print_alphabet - function
 * Description: prints the alphabet, in lowercase, followed by a new line
 * Return: Void
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(tolower(a));
	}
	_putchar('\n');
}
