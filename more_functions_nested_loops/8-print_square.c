#include "main.h"
/**
 * print_square - check the code
 *
 * @size: contain a value
 */

void print_square(int size)
{
	int n = size;

	if (size > 0)
	{
		int a = size;

		while (a > 0)
		{
			while (n > 0)
			{
				_putchar('#');
				n--;
			}

			_putchar('\n');
			n = size;
			a--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
