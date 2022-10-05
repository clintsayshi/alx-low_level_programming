/**
 * *_memcpy - copies memory area
 * @dest: destination pointer to copy into
 * @src: source memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
