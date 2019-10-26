#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints a list of strings
 * @separator: Separator to print betwwen the strings
 * @n: Number of paramaters
 *
 * Description: Prints a list of strings separeted by "separator"
 * If "separator" is NULL, does not print it
 * If any string of the list is NULL, print "(nil)" instead
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	if (n != 0)
	{
		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			s = va_arg(list, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (separator == NULL)
				continue;
			if (i != n - 1)
				printf("%s", separator);
		}

		va_end(list);
	}

	printf("\n");
}
