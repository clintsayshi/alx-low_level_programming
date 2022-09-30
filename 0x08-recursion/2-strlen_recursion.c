#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - return length of a string
 * @s: string whose leng is counted
 *
 * Return: length of @s
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
		len = len + _strlen_recursion(s + 1);
	else
		return (len++);

	return (len + 1);
}
