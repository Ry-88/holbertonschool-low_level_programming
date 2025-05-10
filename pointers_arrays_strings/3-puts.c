#include "main.h"
/**
 * _puts - print a text
 *
 * @str: contain a text to print
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
