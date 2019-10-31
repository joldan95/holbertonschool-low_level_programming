#include <stdio.h>

void startbefore(void) __attribute__ ((constructor));

/**
 * startbefore - Function reproduce before main
 *
 * Return: Nothing
 */
void startbefore(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
