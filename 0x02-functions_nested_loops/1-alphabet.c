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
	char alphabet[] = "abcdefghijKlmnopqrstuvwxyz";
	int a;

	for (a = 0; a < strlen(alphabet); a++)
	{
		_putchar(tolower(alphabet[a]));
	}
	_putchar('\n');
}
