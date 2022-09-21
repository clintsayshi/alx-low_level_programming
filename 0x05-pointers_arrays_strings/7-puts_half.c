#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * puts_half - print half of a string
 * @str: pointer to string variable
 * Description: print half of str, followed by \n
 * Return: void
 */

void puts_half(char *str)
{
	unsigned int i;
	unsigned int start;

	if (strlen(str) % 2 == 0)
		start = strlen(str) / 2;
	else
	{
		start = (strlen(str) - 1) / 2;
		start = start + 1;
	}

	for (i = start; i < strlen(str); i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
