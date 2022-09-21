#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * rev_string - reverse a string
 * @s: pointer to string variable
 * Description: reverse string s
 * Return: void
 */

void print_rev(char *s)
{
	unsigned int i;
	unsigned int length = strlen(s);
	int *ptr = (int*)malloc(length * sizeof(char));

	for (i = length; i > 0; i--)
	{
		ptr[length - i] = *(s + (i - 1));
	}
	
	for (i = 0; i < length; i++)
	{
		*(s + i) = ptr[i];
	}
	free(ptr);
}
