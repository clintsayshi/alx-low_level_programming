#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		int mult = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mult);
		return (0);
	}
}
