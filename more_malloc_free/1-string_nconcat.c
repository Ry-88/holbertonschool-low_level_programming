#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: contain a first string
 * @s2: contain a second string
 * @n: contain a number of laters to concatenates
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int num1 = 0, num3 = 0, num4 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (; s1[num1] != '\0'; num1++)
	{
	}
	array = malloc((num1 + n + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (; num3 < num1; num3++)
	{
		array[num3] = s1[num3];
	}
	for (; num4 < n && s2[num4] != '\0'; num4++)
	{
		array[num3 + num4] = s2[num4];
	}
	array[num3 + num4] = '\0';

	return (array);
}
