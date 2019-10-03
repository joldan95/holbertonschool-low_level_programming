/**
 * cap_string - Capitalize all words of string
 * @str: The pointer to the first letter of the string
 *
 * Description: Capitalize all words of the string with valid
 * separators(Space, tabulation, new line, ',', ';', '.', '!',
 * '?', '"', '(', ')', '{' and '}'
 *
 * Return: The pointer to src where the string is allocated
 */
char *cap_string(char *str)
{
	int len = 0;
	int i;
	char *c = " \t\n,;.!?\"(){}";

	while (str[len] != 0)
	{
		if (len == 0 && (str[len + 1] >= 97 && str[len + 1] <= 122))
			str[len] -= 32;
		
		for (i = 0; c[i]; i++)
		{
			if (str[len] == c[i])
			{
				if (str[len + 1] >= 97 && str[len + 1] <= 122)
				{
					str[len + 1] -= 32;
					break;
				}
			}
		}
		len++;
	}
	return (str);
}
