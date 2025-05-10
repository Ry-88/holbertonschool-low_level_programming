#include "main.h"
/**
 * swap_int - swap of tow int values
 *
 * @a: contain pointer of value
 * @b: contain pointer of value
 */

void swap_int(int *a, int *b)
{
	int first = *a;
	int second = *b;

	*a = second;
	*b = first;
}
