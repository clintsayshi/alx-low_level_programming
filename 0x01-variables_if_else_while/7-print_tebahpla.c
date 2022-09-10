#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: print alphabet in lowercase in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int counter = sizeof(letters) / sizeof(char) - 2;

	while (counter > -1)
	{
		putchar(letters[counter]);
		counter = counter - 1;
	}
	putchar('\n');
	return (0);
}
