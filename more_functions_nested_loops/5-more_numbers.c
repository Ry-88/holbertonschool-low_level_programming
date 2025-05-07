#include "main.h"
/**
 * more_numbers - check the code
 */

void more_numbers(void)
{
	int r = 0;
	int c = 0;
	int check = 0;

	while (r <= 9)
	{
		while (c <= 14)
		{
			if (check == 1)
			{
				_putchar(1 + '0');
			}

			_putchar(c % 10 + '0');
			c++;
			if (c == 10)
			{
				check = 1;
			}
		}

		check = 0;
		c = 0;
		r++;
		_putchar('\n');
	}
}
