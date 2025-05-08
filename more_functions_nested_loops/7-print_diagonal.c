#include "main.h"
/**
 * print_diagonal - check the code
 *
 * @n: contain a value
 */

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n > 0)
	{
		while (a < n)
		{
			b = 0;
			while (b < a)
			{
				_putchar(' ');
				b++;
			}

		_putchar(92);
		_putchar('\n');
		a++;
		}
	}
	else
	{
		_putchar('\n');
	}

}
