#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: contain an array to search in it
 * @size:  number of elements in the array
 * @cmp: pointer to function i used
 * Return: index of elements or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int num = 0, result = 0;

	if (size <= 0)
	{
		return (-1);
	}
	for (; num < size; num++)
	{
		if (cmp(array[num]) == 1 )
		{
			result++;
		}
	}
	if (result > 0)
	{
		return (result);
	}

	return (-1);
}
