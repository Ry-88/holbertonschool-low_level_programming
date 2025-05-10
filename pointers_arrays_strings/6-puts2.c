#include "main.h"
/**
 * puts2 - print one and skip one character
 *
 * @str: contain a character
 */

void puts2(char *str)
{
	int n = 0, i = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	for (; i < n; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
