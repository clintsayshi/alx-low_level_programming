#include <stddef.h>

/**
 * *_strstr - locate a substring
 * @haystack: main string
 * @needle: the substring to be located
 *
 * Return: pointer to location of the substring @needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, flag;

	i = 0;
	j = 0;
	flag = 0;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			flag = 1;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					flag = 0;

				}
				j++;
			}
			if (flag == 1)
			{
				return (&haystack[i]);
			}
		}
		i++;
	}

	return (NULL);
}
