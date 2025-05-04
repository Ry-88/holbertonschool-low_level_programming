#include "main.h"
/**
 * print_alphabet - run code
 *
 * without return any value
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
