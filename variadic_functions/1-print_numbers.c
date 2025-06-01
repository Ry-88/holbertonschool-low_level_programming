#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print all numbers and new line
 * @separator: contain a string to be printed between numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num = 0;
	va_list args;

	va_start(args, n);
	for (; num < n; num++)
	{
		if (separator == NULL)
		{
			printf("%d ", va_arg(args, int));
		} else if (num == n - 1)
		{
			printf("%d", va_arg(args, int));
			break;
		}
		else
		{
			printf("%d%s ", va_arg(args, int), separator);
		}
	}
	printf("\n");
}
