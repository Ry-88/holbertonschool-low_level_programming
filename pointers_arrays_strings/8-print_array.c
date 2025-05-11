#include "main.h"
#include <stdio.h>
/**
 * print_array - print inegers
 *
 * @a: contain array
 * @n: contain a number of array size
 */

void print_array(int *a, int n)
{
	int c = 0;

	while (c < n)
	{
		if (c == n - 1)
		{
			printf("%d", a[c]);
			c++;
		}
		else
		{
			printf("%d, ", a[c]);
			c++;
		}
	}

	printf("\n");
}
