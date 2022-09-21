#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - copies string pointed to
 * @dest: destination string
 * @src: source string
 * Description: copies the string pointed to by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	return strcpy(dest, src);
}
