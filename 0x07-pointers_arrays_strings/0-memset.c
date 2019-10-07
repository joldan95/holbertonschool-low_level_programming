/**
 * _memset - Copies a character into the first
 * n bytes of memory in s
 * @s: Pointer to the block of memory
 * @b: Value to be set
 * @n: Number of bytes to be set
 *
 * Return: The pointer to the memory area of s
 */
void *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
