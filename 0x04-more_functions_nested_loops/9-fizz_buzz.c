#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the number from
 * 0 to 100 with the next conditions:
 *   - Multiples of 3: Fizz
 *   - Multiples of 5: Buzz
 *   - Multiples of 3 & 5: FizzBuzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i++ < 100)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz");
			else
				printf("Fizz");
		}
		else
		{
			if (i % 5 == 0)
				printf("Buzz");
			else
				printf("%d", i);
		}
		printf(i == 100 ? "\n" : " ");
	}
}
