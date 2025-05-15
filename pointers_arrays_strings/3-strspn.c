#include "main.h"
/**
 * _strspn - count the length of baytes
 *
 * @s: contain a string to be scanned
 * @accept: contain a string to match
 *
 * Return: vlaue of length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, n = 0;

	while (s[n] >= '\0')
	{
		if (s[n] == accept[n])
		{
			a++;
		}
		n++;
	}

	return (a);
}
