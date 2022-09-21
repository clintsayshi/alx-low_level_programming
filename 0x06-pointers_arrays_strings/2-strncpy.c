#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - copy src to end of dest
 * @dest: destination pointer
 * @src: string to be copied
 * @n: integer value
 * Description: copy n chars of src to dest
 * Return: a string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
