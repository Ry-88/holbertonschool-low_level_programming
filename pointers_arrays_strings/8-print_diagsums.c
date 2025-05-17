#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: contain an array to print
 * @size: contain a size of array
 */

void print_diagsums(int *a, int size)
{
	int num = 0, c = size - 1;
	int result1 = 0, result2 = 0;

	while (num < (size * size))
	{
		result1 += (a[num]);
		num = num + size + 1;
	}

	while (c <= (size * size) - size)
	{
		result2 += (a[c]);
		c = c + size - 1;
	}

	printf("%d, %d\n", result1, result2);

}
