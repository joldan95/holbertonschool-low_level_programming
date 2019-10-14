#include <stdio.h>

/**
 * main - Entry point of application. Prints all arguments.
 * @argc: Number of arguments to the main function
 * @argv: Array with the arguments to the main function
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
