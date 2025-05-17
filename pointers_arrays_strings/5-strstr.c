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
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[j + i] != needle[j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return (NULL);
}
