#include <stdlib.h>

/**
 * print_name - Prints a name accordly to a function inserted by pam
 * @name: Name to print
 * @f: function to use to print the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
