#include "main.h"
/**
 * factorial - return a factorial of number
 *
 * @n: contain a number
 *
 * Return: -1 or 1 or number of factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
