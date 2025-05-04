#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * without return value
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		c = 'a';
		i++;
		_putchar('\n');
	}
}
