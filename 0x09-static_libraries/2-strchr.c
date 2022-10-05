/**
 * _strchr -search for char @c in @s
 * @s: where to search fo @c
 * @c: the char to search in @s
 * Return: the char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
