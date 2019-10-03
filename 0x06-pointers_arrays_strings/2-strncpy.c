/**
 * _strncpy - copies the second to the first
 * parameter
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: bytes to use from src
 *
 * Return: The pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	char r;
	do {
		r = *src;
		*(dest + len) = r;
		src += *src != 0 ? 1 : 0;
		len++;
	} while (*(dest + len) != '\0' && len < n);
	return (dest);
}
