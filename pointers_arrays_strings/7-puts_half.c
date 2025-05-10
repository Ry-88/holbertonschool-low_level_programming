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

	if (a % 2 == 0)
	{
		n = a / 2;
	}
	else
	{
		n = (a + 1) / 2;
	}

	while (n < a)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
