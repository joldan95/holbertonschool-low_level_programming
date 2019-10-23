#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two numbers
 * @a: Number a
 * @b: Number b
 *
 * Return: The operation computed
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substract two numbers
 * @a: Number a
 * @b: Number b
 *
 * Return: The operation computed
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: Number a
 * @b: Number b
 *
 * Return: The operation computed
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two numbers
 * @a: Number a
 * @b: Number b
 *
 * Return: The operation computed
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Obtain the remiander division of two numbers
 * @a: Number a
 * @b: Number b
 *
 * Return: The operation computed
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
