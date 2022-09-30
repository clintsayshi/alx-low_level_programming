#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of string arguments
 *
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char* argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
