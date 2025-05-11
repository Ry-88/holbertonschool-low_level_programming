#include "main.h"
/**
 * reverse_array - reverses the content of an array
 *
 * @a: content of array
 * @n: number of element of the array
 */

void reverse_array(int *a, int n)
{
	int t = 0, c = 0, b = n - 1;

	while (t < b)
	{
		c = a[t];
		a[t] = a[b];
		a[b] = c;

		t++;
		b--;
	}
}
