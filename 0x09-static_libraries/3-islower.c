#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - checks if value is lowercase
 * @c: a char value
 * Description: checks for lowercase or uppercase character
 * Return: 0 or 1
 */
int _islower(int c)
{
	int value = (int) c;

	if (value < 97)
		return (0);
	else
		return (1);
}
