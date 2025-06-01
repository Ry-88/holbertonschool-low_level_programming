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
	char *str;

	va_start(args, n);
	for (; num < n; num++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && num != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args), printf("\n");
}
