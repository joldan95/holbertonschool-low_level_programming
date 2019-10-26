#include <stdarg.h>

/**
 * sum_them_all - Sums the numbers inserted by parameter
 * @n: Number of parameters
 *
 * Return: Sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
