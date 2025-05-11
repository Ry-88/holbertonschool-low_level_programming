#include "main.h"
/**
 * _strncat - append text to another array with size
 *
 * @dest: contain first text to append to it
 * @src: contain a text to copy
 * @n: size of character to copy
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int num = 0, a = 0;

	while (dest[num] != '\0')
	{
		num++;
	}

	while (a < n && src[a] != '\0')
	{
		dest[num] = src[a];
		a++;
		num++;
	}

	dest[num] = '\0';
	return (dest);
}
