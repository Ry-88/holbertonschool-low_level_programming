#include "main.h"
/**
 * print_line - check the code
 *
 * @n: contain a number
 *
 * Return: 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
