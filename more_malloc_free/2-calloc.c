#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: contain elements for an array
 * @size: size of baytes of array
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int num = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}

	while (num < nmemb * size)
	{
		array[num] = 0;
		num++;
	}

	return (array);
}
