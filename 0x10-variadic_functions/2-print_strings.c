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
	char *temp;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char*);

		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}
	va_end(args);
	putchar('\n');
}
