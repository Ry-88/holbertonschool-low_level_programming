#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer which duplicate by str
 *
 * @str: contain a string to duplicated
 *
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *array;
	int size = 0, num = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0')
	{
		size++;
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	while (num < size)
	{
		array[num] = str[num];
		num++;
	}

	return (array);
}
