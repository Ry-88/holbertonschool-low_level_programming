#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - return the sum of all numbers
 * @n: contain a number of numbers to sum
 * Return: the result of sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int num = 0;
	int result = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (; num < n; num++)
	{
		result += va_arg(args, int);
	}
	va_end(args);

	return (result);
}
