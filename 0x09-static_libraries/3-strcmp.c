#include "main.h"
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
	/*int size2 = strlen(s2);*/
	int i;

	for (i = 0; i <  size1; i++)
	{
		if (s1[i] != s2[i])
		{
			if ((int)s1[i] > (int)s2[i])
			{
				return ((int)s1[i] - (int)s2[i]);
			}
			if ((int)s1[i] < (int)s2[i])
			{
				return ((int)s1[i] - (int)s2[i]);
			}
		}
	}
	return (0);
}
