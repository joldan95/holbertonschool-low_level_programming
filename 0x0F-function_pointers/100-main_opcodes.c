#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of application
 * @ac: Count of arguments
 * @av: List of arguments
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	char *p;
	int i, size;

	if (ac != 2)
	{
		puts("Error");
		exit(1);
	}

	size = atoi(av[1]);
	if (atoi(av[1]) < 0)
	{
		puts("Error");
		exit(1);
	}

	p = (char *)main;
	for (i = 0; i < size; i++)
	{
		printf("%02hhx", p[i]);
		printf((i == size - 1 ? "\n" : " "));
	}

	return 0;
}
