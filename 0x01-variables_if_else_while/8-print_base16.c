#include <stdio.h>
#include <ctype.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: print all base 16 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numbers[] = "0123456789ABCDEF";
	int length = sizeof(numbers) / sizeof(char);
	int counter = 0;

	while (counter < length)
	{
		if (isalpha(numbers[counter]))
		{
			putchar(tolower(numbers[counter]));
		}
		else
		{
			putchar(numbers[counter]);
		}
		counter++;
	}
	putchar('\n');
	return (0);
}
