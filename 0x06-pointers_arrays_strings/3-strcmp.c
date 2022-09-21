#include <string.h>

/**
 * _strcmp - compare strings
 * @s1: string 1
 * @s2: string 2
 * Description: compares two strings
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int size1 = strlen(s1);
	int size2 = strlen(s2);

	if (size1 < size2)
		return (-15);
	else if (size1 == size2)
		return (0);
	else
		return (15);

}
