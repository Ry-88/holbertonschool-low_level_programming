#include "main.h"
/**
 * _pow_recursion - return the number of x power of y
 *
 * @x: contain a first number
 * @y: contain a number use to power
 *
 * Return: value of x or -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
