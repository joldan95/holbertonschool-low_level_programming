/**
 * reverse_array - reverse the content of an array of integers
 * @a: Pointer to the first element of the array
 * @n: Numbers of elements on the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, r;

	i = 0;
	j = n - 1;

	while (i <= j)
	{
		r = a[i];
		a[i] = a[j];
		a[j] = r;
		i++;
		j--;
	}
}
