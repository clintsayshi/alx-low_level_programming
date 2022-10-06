#include <stdlib.h>
/**
 * _strdup - returns pointer to newly allocated space in memory
 * @str: initial value to set to pointer
 *
 * Return: pointer to newly allocated memory
 */

char *_strdup(char *str)
{
	char *newly;

	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	newly = (char *)malloc(sizeof(char) * (i + 1));
	if (newly == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	newly[j] = str[j];
		return (newly);
}
