/**
 * swap_int - Swap the integers
 * inserted by parameter
 * @a: Pointer to an int
 * @b: Pointer to an int
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
