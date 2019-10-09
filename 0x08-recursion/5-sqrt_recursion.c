int _sqrt_r(int x, int n);

/**
 * _sqrt_recursion - Computes the natural square root of a number
 * @n: Number to compute the natural square root
 *
 * Return: The natural square root of n.
 * -1 if the number does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else
		return (_sqrt_r(0, n));
}

/**
 * _sqrt_r - Computes the natural square root of a number
 * @x: Number to compare the natural square. It's supposed to be
 * a positive number
 * @n: Number to compute the natural square root
 *
 * Return: The natural square root of the n.
 * -1 if the number does not have a natural square root
 */
int _sqrt_r(int x, int n)
{
	if (x * x > n)
		return (-1);
	else if (x * x == n)
		return (x);
	else
		return (_sqrt_r(x + 1, n));
}
