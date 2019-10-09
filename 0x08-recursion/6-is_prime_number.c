Bint prime_number(int x, int n);

/**
 * is_prime_number - Check if the number inserted is or not a prime number
 * @n: Number to check
 *
 * Return: 1 if is a prime number
 * 0 if is not a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_number(2, n));
}

/**
 * prime_number - Check if the number inserted is or not a prime number
 * @x: Number to divide the supposed prime. It should be
 * greater than 2
 * @n: Number check if is prime
 *
 * Return: 1 if is a prime number.
 * 0 if is not.
 */
int prime_number(int x, int n)
{
	if (n == x)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (prime_number(x + 1, n));
}
