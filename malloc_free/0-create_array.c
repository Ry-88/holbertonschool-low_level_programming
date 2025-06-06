#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array and initializes it
 *
 * @size: contain a size of array
 * @c: contain a char value
 *
 * Return: a pointer or 0 if fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n = 0;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	while (n < size)
	{
		array[n] = c;
		n++;
	}

	return (array);
}
