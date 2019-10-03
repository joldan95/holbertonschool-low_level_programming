/**
 * _strcat - Concatenate the first string with the second
 * @dest: The destination pointer
 * @src: The source pointer
 *
 * Return: The pointer to dest where the concatenate string
 * is allocated
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len] != 0)
		len++;

	do {
		dest[len + i] = *src;
		src++;
		i++;
	} while (*src != 0);

	return (dest);
}
