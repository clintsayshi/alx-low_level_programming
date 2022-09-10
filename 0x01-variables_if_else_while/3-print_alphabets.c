#include <stdio.h>
#include <ctype.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int counter = 0;
	int length_letters = sizeof(letters) / sizeof(char);

	while (counter < length_letters - 1)
	{
		putchar(letters[counter]);
		counter = counter + 1;
	}
	counter = 0;

	while (counter < length_letters - 1)
	{
		putchar(toupper(letters[counter]));
		counter = counter + 1;
	}
	putchar('\n');
	return (0);
}
