/**
 * _strchr - Locate the first ocurrence of a
 * character
 * @s: Pointer to the string
 * @c: Character to look for
 *
 * Return: Pointer to the first occurence of the character.
 * NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return (0);
}
