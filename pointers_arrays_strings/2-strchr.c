#include "main.h"
#include <stddef.h>
/**
 * _strchr - check if character if found
 *
 * @s: contain a string to search on it
 * @c: contain a latter to searched
 *
 * Return: c or NULL
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == c)
		{
			return (s + n);
		}
		n++;
	}

	return (NULL);
}
