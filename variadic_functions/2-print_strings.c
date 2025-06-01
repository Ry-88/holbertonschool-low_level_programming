#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings and new line at the end
 * @separator: contain a string to be printed between the strings
 * @n: number of string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int num = 0;
	va_list args;

	va_start(args, n);
	for (; num < n; num++)
	{
		if (separator == NULL)
		{
			if (va_arg(args, char*) == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", va_arg(args, char*));
			}
		} else if (num == n - 1)
		{
			printf("%s", va_arg(args, char*));
			break;
		}
		else
		{
			printf("%s%s", va_arg(args, char*), separator);
		}
	}
	va_end(args);
	printf("\n");
}
