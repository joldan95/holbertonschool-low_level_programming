int palindrome(char *s, int n);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a word is palindrome
 * @s: Word to check if is palindrome
 *
 * Return: 1 if the word is palindrome
 * 0 if is not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	return (palindrome(s, len));
}

/**
 * palindrome - Checks if a word is palindrome
 * @s: Word to check if is palindrome
 * @n: Length of the word
 *
 * Return: 1 if the word is palindrome
 * 0 if is not
 */
int palindrome(char *s, int n)
{
	if (n <= 0)
	{
		return (1);
	}
	else
	{
		if (*s == *(s + n))
			return (palindrome(s + 1, n - 2));
		else
			return (0);
	}
}

/**
 * _strlen_recursion - Compute the length of a string
 * using recursion
 * @s: String to compute the length
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
