/**
 * rot13 - Encodes the string using rot13
 * @str: The pointer to the first letter of the string
 *
 * Description: Encodes the string using rot13, rotating
 * the characters 13 positions
 *
 * Return: The pointer to src where the string is allocated
 */
char *rot13(char *str)
{
	int len = 0;
	int i;
	char *c = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *n = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	while (str[len] != 0)
	{
		for (i = 0; c[i]; i++)
		{
			if (str[len] == c[i])
			{
				str[len] = n[i];
				break;
			}
		}
		len++;
	}
	return (str);
}
