#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - add all arguments
 * @n: number of arguments
 *
 * Return: sum of all int arguments
 */

int sum_them_all(int n, ...)
{
	int sum = 0;
	int i;
	va_list nums;

	if (n == 0)
		return (0);

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
