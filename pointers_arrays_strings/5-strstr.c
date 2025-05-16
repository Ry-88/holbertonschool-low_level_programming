#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates  a substring and change pointer
 *
 * @haystack: contain a string to search in it
 * @needle: contain a string to search for it
 *
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
	{
		return (NULL);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == neddel[0])
		{
			return (haystack + i);
		}
	}

	return (NULL);
}
