#include <stdlib.h>

/**
 * create_array - creates arrays of chars with initial value
 * @size: size of array to be created
 * @c: value to be added to array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = (char)c;
		i++;
	}
	array[size] = '\0';
	return (array);
}
