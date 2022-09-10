#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: print all base 16 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numbers[] = "0123456789abcdef";
	int length = sizeof(numbers) / sizeof(char);
	int counter = 0;

	for (counter < length)
	{
		putchar(numbers[counter]);
		counter++;
	}
	putchar('\n');
	return (0);
}
