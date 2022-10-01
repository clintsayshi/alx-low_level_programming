#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
 * isInt - checks if a string is int
 * @c: the string to be checked
 *
 * Return: 1 or 0
 */

int isInt(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (!isdigit(c[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: count of all arguments
 * @argv: array of strings
 *
 * Return: Always 0
 */


int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isInt(argv[i]))
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (1);
	}
}
