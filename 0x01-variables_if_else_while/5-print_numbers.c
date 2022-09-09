#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: print all single base 10 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter = 0;

	while (counter < 10)
	{
		printf("%d", counter);
		counter = counter + 1;
	}
	putchar('\n');
	return (0);
}
