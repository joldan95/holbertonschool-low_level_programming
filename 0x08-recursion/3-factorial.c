/**
 * factorial - Compute the factorial of a number
 * @n: Number to compute the factorial
 *
 * Return: Factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
