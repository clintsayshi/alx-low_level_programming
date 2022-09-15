#include <stdio.h>
/**
 * times_table - print times table
 * Description:  prints the n times table, starting with 0
 * Return: Void
 */
void times_table(void)
{
	int a, b, counter;

	for (a = 0; a <= 9; a++)
	{
		counter = 0;
		for (b = 0; b <= 9; b++)
		{
			printf("%d", counter);
			if (b != 9)
			{
				if (counter <= 9)
					printf(",  ");
				else
					printf(", ");
			}
			counter = counter + a;
		}
		printf("\n");
	}
}
