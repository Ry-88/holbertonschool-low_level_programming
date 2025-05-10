#include "main.h"
#include <string.h>
/**
 * _strlen - count the number of latter
 *
 * @s: contain a word
 *
 * Return: n
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
