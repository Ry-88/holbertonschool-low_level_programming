#include "main.h"
/**
 * print_triangle - check the code
 *
 * @size: contain a number
 */

void print_triangle(int size)
{
	int n = 1;

	if (size > 0)
	{
		while (n <= size)
		{
			int b = n;
			int size2 = ((size - b));

			while (size2 > 0)
			{
				_putchar(' ');
				size2--;
			}
			while (b > 0)
			{
				_putchar('#');
				b--;
			}
			n++;
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}
}
