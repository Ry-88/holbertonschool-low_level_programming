#include "main.h"
/**
 * puts_half - print from half of character
 *
 * @str: contain a character
 */

void puts_half(char *str)
{
	int n = 0, a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	n = a / 2;
	if (n % 2 == 1)
	{
		for (; n < a; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (; n < a - 1; n++)
		{
			_putchar(str[n]);
		}
	}

	_putchar('\n');
}
