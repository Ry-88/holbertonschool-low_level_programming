#include "main.h"
/**
 * _strncpy - copy a string
 *
 * @dest: contain a copy of string
 * @src: contain a string to copy for
 * @n: size
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}

	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
