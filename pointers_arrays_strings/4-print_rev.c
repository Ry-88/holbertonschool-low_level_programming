#include "main.h"
/**
 * print_rev - print strint in reverse
 *
 * @s: contain a string
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}

	_putchar('\n');
}
