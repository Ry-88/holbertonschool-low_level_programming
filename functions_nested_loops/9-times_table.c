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
	int result = 0;

	while (n <= 9)
	{
		while (f <= 9)
		{
			result = (f * n);
			if (result == 0)
			{
				if (f <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
			} else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			} else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			f++;
		}
		
		n++;
		f = 0;
		_putchar('\n');
	}

}
