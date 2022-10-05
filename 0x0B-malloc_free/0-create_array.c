#include <stdlib.h>

/**
 * create_array - creates arrays of chars with initial value
 * @size: size of array to be created
 * @c: value to be added to array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	int i;

	if (size == 0)
		return (NULL);
	i = 0;
	while (i < 98)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
