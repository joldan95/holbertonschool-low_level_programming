#include <stdio.h>

/**
 * main - Entry point of application. Prints the number of args.
 * @argc: Number of arguments to the main function
 * @argv: Array with the arguments to the main function
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
