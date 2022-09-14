#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - function
 * Description: checks for lowercase character
 * Return: Void
 */
int _islower(c)
{
	int value = (int) c;
	if (value < 97)
		return 0;
	else
		return 1;
}
