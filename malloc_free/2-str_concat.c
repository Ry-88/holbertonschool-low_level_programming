#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates tow string
 *
 * @s1: contain a first string
 * @s2: contain a second string
 *
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int size1 = 0, size2 = 0, size3 = 0, num = 0, num2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (; s1[size1] != '\0'; size1++)
	{
	}

	for (; s2[size2] != '\0'; size2++)
	{
	}

	size3 = size1 + size2 + 1;
	array = malloc(size3 * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (; num < size1; num++)
	{
		array[num] = s1[num];
	}

	while (num < size3 - 1)
	{
		array[num] = s2[num2];
		num++, num2++;
	}

	return (array);
}
