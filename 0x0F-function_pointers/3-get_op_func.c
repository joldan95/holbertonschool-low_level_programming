#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Returns a function to use to compute an operation
 * @s: String to knows the function
 *
 * Return: The corresponding function.
 * NULL if the character does not match with any operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*(ops[i]).op == *s)
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
