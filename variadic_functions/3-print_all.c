#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print all type of data
 * @format: contain a list of types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		while (format[i] &&
		       !(format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's'))
			i++;

		if (!format[i])
			break;

		printf("%s", sep);
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			printf("%s", str ? str : "(nil)");
			break;
		}
		sep = ", ";
		i++;
	}
	va_end(args), printf("\n");
}
