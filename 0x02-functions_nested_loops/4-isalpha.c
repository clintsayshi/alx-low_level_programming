#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks if value is aphabet
 * @c: a char value
 * Description: checks for alphabetic character, lowercase or uppercase
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	int value = (int) c;

	if ((value >= 65 && value <= 90) || (value >= 97 && value <= 122))
		return (1);
	else
		return (0);
}
