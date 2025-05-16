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
	int i, count = 0;

	while (haystack[count])
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		if (haystack[i] == needle[0])
		{
			return (haystack + i);
		}
	}

	return (NULL);
}
