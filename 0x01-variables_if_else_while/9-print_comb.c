#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description:  prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter = 0;

	while (counter < 10)
	{
		putchar(counter + '0');
		if (counter < 9)
		{
			putchar(',');
			putchar(' ');
		}
		counter = counter + 1;
	}
	putchar('\n');
	return (0);
}
