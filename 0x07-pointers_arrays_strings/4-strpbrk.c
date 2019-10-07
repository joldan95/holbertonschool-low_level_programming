/**
 * _strpbrk - Locate the first ocurrence of a
 * character from a set of characters
 * @s: Pointer to the string where locate the char
 * @c: Characters to look for
 *
 * Return: Pointer to the first occurence in the set of chars.
 * NULL if any character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}

	return (0);
}
