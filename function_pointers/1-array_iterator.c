#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -  executes a function given as a parameter
 * @array: array to contain an element
 * @size: size of array
 * @action: pointer to function call
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n = 0;
	int num = 0, *my_array;

	my_array = malloc(size);
	if (my_array == NULL)
	{
		free(my_array);
		return;
	}
	my_array = array;
	for (; n < size; n++)
	{
		action(my_array[num]);
		num++;
	}
}
