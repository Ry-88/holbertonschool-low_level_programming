#include "main.h"
/**
 * _memcpy - copies memory area
 *
 * @dest: contain a string to overwrite on it
 * @src: contain a string that copy for
 * @n: contain a number will copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num = 0;

	while (num < n)
	{
		dest[num] = src[num];
		num++;
	}

	return (dest);
}
