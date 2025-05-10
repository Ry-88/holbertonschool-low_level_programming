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

	while (n > 0)
	{
		n--;
		_putchar(s[n]);
	}

	_putchar('\n');
}
