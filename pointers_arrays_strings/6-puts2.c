#include "main.h"
/**
 * puts2 - print one and skip one character
 *
 * @str: contain a character
 */

void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}

	_putchar('\n');
}
