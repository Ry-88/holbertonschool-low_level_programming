#include "main.h"
/**
 * _strcat - copy text from one to another
 *
 * @dest: contain first text where overewrite on it
 * @src: contain a text to copy
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int n = 0, a = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	while (src[a] != '\0')
	{
		dest[n] = src[a];
		n++;
		a++;
	}

	dest[n] = '\0';

	return (dest);
}
