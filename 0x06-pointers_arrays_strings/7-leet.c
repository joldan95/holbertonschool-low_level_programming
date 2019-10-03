/**
 * leet - Encodes the string into 1337
 * @str: The pointer to the first letter of the string
 *
 * Description: Encodes the string to 1337 changing the
 * following letters:
 * a - A to 4
 * e - E to 3
 * o - O to 0
 * t - T to 7
 * l - L to 1
 *
 * Return: The pointer to src where the string is allocated
 */
char *leet(char *str)
{
	int len = 0;
	int i;
	char *c = "aAeEoOtTlL";
	char *n = "43071";

	while (str[len] != 0)
	{
		for (i = 0; c[i]; i++)
		{
			if (str[len] == c[i])
			{
				str[len] = n[i / 2];
				break;
			}
		}
		len++;
	}
	return (str);
}
