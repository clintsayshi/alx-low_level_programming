#include <stdio.h>
#include <string.h>

/**
 * *_strncat - concatenate 2 strings
 * @dest: destination pointer
 * @src: string to be concatenated
 * @n: integer value
 * Description: add n chars of src to dest
 * Return: a string pointer
 */

char *_strncat(char *dest, char *src, int n)
{

	return (strncat(dest, src, n));

}
