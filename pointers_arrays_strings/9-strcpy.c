#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: contain array s1
 * @src: contain a text
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0, s = 0;

	while (src[n] != '\0')
	{
		n++;
	}

	while (s <= n)
	{
		if (s == n)
		{
			dest[s] = '\0';
			break;
		}
		dest[s] = src[s];
		s++;
	}

	return (dest);
}
