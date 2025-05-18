#include "main.h"
/**
 * _sqrt_recursion - return the natural square root
 *
 * @n: contain a number
 *
 * Return: value of natural square root or -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate natural square root
 *
 * @n: contain a number to calculate square root
 * @a: iterate number
 *
 * Return: value of natural square root
 */

int _sqrt(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
	{
		return (-1);
	}

	if (sqrt == n)
	{
		return (a);
	}

	return (_sqrt(n, a + 1));
}
