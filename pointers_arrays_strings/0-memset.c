#include "main.h"
/**
 * _memset -  fills memory with a constant
 *
 * @s: contain a text or an array
 * @b: contain a string that fill for
 * @n: contain number of bytes to fill
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num = 0;

	while (num < n)
	{
		s[num] = b;
		num++;
	}

	return (s);
}
