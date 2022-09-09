#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: last digit of a random number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_number = n % 10;

	printf("Last digit of %d ", n);
	if (last_number > 5)
	{
		printf("and is greater than %d\n", last_number);
	}
	else if (last_number == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
