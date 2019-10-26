#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints a list of numbers
 * @separator: Separator to print betwwen the numbers
 * @n: Number of paramaters
 *
 * Description: Prints a list of numbers separated by "separator"
 * If "separator" is NULL, does not print it.
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n != 0)
	{
		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));

			if (separator == NULL)
				continue;
			if (i != n - 1)
				printf("%s", separator);
		}

		va_end(list);
	}

	printf("\n");
}
