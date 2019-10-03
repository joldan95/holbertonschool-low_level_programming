/**
 * string_toupper - Changes all lowercase to uppercase letters
 * @str: The pointer to the first letter of the string
 *
 * Return: The pointer to src where the string is allocated
 */
char *string_toupper(char *str)
{
	int len = 0;

	while (str[len] != 0)
	{
		if (str[len] >= 97 && str[len] <= 122)
			str[len] -= 32;
		len++;
	}
	return (str);
}
