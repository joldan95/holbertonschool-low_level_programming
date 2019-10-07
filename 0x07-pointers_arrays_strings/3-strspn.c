/**
 * _strspn - Gets the length of a prefix
 * substring
 * @s: The string to compare the prefix
 * @accept: The characters to compare
 *
 * Return: The numbers of bytes in the initial segment
 * of s which consit only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				b++;
				break;
			}
			j++;
		}
		if (!accept[j])
			break;
		i++;
	}

	return (b);

}
