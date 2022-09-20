#include "main.h"

/**
 * swap_int - Swap two int values
 * @a: 1st pointer formal parameter
 * @b: 2nd pointer formal parameter
 * Description: takes a and b pointers and swaps their values
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
