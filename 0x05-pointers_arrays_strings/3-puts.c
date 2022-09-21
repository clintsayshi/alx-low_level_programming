#include "main.h"
#include <string.h>

/**
 * _puts - print string
 * @str: pointer to string variable
 * Description: prints a string, followed by \n to stdout
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
