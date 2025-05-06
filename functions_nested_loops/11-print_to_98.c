#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print the numbers
 *
 * @n: get the start number
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	} else if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}

	printf("\n");
}
