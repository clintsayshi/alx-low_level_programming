#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * puts2 - print chars of a string
 * @str: pointer to string variable
 * Description: print every other char of str
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i > strlen(str); i = i + 2)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
