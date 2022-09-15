#include <stdio.h>
/**
 * print_times_table - print times table
 * @n: an integer value
 * Description:  prints the n times table, starting with 0
 * Return: Void
 */
void print_times_table(int n)
{
	int a, b, counter;

	if (n >= 0 || n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			counter = 0;
			for (let b = 0; b <= n; b++)
			{
				printf("%d", counter);
				if (counter != n)
				{
					printf(", ");
				}
				counter = counter + a;
			}
			printf("\n");
		}
	}
}
