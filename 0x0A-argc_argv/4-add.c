#include <stdio.h>
#include <stdlib.h>

int check_number(char *s);

/**
 * main - Entry point of application. Adds the arguments inserted.
 * @argc: Number of arguments to the main function
 * @argv: Array with the arguments to the main function
 *
 * Return: 0 if can make the sum (Success).
 * 1 if a parameter is not a number.
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		if (!check_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * check_number - Verifies if a string just contain numbers
 * @s: String to verify
 *
 * Return: 1 if just have numbers
 * 0 if does have any char that is not a digit
 */
int check_number(char *s)
{
	while (*s != '\0')
	{
		if (*s > 57 || *s < 48)
			return (0);
		s++;
	}
	return (1);
}
