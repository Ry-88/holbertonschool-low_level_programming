#include "main.h"
/**
 * print_chessboard - print the chessboard
 *
 * @a: contain a string to print
 */

void print_chessboard(char (*a)[8])
{
	int num = 0, c = 0;

	while (c < 8)
	{
		num = 0;
		while (num < 8)
		{
			_putchar(a[c][num]);
			num++;
		}

		_putchar('\n');
		c++;
	}
}
