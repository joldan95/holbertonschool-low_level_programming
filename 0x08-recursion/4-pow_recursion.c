/**
 * _pow_recursion - Compute the power of a number
 * @x: Number to be raised
 * @y: Number of the power
 *
 * Return: The of x raised to the power of y.
 * -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
