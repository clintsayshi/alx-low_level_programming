#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: separates the printed numbers
 * @n: number of integers passed to function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	putchar('\n');
}
