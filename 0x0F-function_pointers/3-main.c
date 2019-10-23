#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of application
 * @ac: Count of arguments
 * @av: List of arguments
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int (*f)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(av[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", f(atoi(av[1]), atoi(av[3])));

	return (0);
}
