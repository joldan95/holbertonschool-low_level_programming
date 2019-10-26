#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints a list of any type of parameter
 * @format: A list of types arguments passed to the function
 *
 * Description: Prints a list of any type of parameter
 * Separate the arguments with ", "
 * The types allowed are: c(char), i(int), f(float), s(char *)-if s == NULL
 * prints '(nil)' instead-.
 * Any other char it would be ignored
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, sep = 1;
	char *s;

	va_start(list, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char)va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(list, double));
			break;
		case 's':
			s = va_arg(list, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			sep = 0;
			break;
		}
		if (sep && format[i + 1])
			printf(", ");
		sep = 1;
		i++;
	}
	va_end(list);
	printf("\n");
}
