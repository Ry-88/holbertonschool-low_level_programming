#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - search a string and change a pointer if match with set of bytes
 *
 * @s: contain a string to search on
 * @accept: contain a string using for search
 *
 * Return: a pointer of s whene match with accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
