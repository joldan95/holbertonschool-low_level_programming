/**
 * _strncat - Concatenate the first string with the second
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: bytes to use from src
 *
 * Return: The pointer to dest where the concatenate string
 * is allocated
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while(dest[len] != 0)
		len++;

	do {
		dest[len + i] = *src;
		src++;
		i++;
	} while(*src != 0 && i < n);

	return (dest);
}
