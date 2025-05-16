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
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int check = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				check = 1;
				break;
			}
		}

		if (!check)
		{
			return i;
		}
	}

	return i;
}
