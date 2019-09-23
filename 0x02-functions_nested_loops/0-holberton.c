#include <string.h>
#include "_putchar.c"

/**
 * main - Entry point
 *
 * Description: Prints Holberton followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char name[] = "Holberton";
	unsigned int i = 0;

	while (i < strlen(name))
		_putchar(name[i++]);
	_putchar('\n');
	return (0);
}
