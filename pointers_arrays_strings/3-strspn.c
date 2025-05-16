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
	unsigned int a, n, c = 0;

	while (s[n] != '\0')
	{
		c = 0;
		if (s[n] == ',')
		{
			break;
		}

		while (accept[c] != '\0')
		{
			if (s[n] == accept[c])
			{
				a++;
			}
			c++;
		}
		n++;
	}

	return (a);
}
