#include "main.h"
/**
 * times_table - check the code.
 *
 * Return: nothing
 */

void times_table(void)
{
	int n = 0;
	int f = 0;
	int c = 0;

	while (n <= 9)
	{
		while (f <= 9)
		{
			if (n == 0)
			{
				_putchar(c + '0');
				if (f != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			} else if (n == 1)
			{
				_putchar(c + '0');
				if (f != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				c++;
			} else if (n == 2)
			{
				if (c > 9)
				{
					if (f <= 9)
					{
						_putchar(',');
						_putchar(' ');
					}
					_putchar((c / 10) + '0');
                                        _putchar((c % 10) + '0');
				} else if (c == 0)
				{
					_putchar(c + '0');
				}
				else
				{
					if (f != 9)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(c +'0');
				}
				c += 2;
			}

			f++;
		}
		
		c = 0;
		n++;
		f = 0;
		_putchar('\n');
	}

}
