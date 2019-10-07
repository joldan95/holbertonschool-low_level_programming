/**
 * _strstr - Locate the second string into
 * the first string
 * @haystack: String where to fnd the substring
 * @needle: the subtring to find
 *
 * Return: Pointer to the first occurence of the substring
 * NULL if any character is found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (!needle[j])
			return (haystack + i);
		i++;
	}

	return (0);
}
