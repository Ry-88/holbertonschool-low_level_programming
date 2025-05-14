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
	int n = 0;

	while (s[n] != '\0')
	{
		if (s[n] == c)
		{
			s += n;
			return (s);
		}
		n++;
	}

	s[n] = '\0';
	return (NULL);
}
