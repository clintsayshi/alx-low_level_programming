#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: print all single base 10 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a < '9'; a++)
	{
		for (b = b + '1'; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);

			if (a + b != 8 + 9)
			{
				putchar(' ');
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
