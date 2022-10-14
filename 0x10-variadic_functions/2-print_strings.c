#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: separates the printed strings
 * @n: number of arguments passed to function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char*));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}
	putchar('\n');
	va_end(args);
}
