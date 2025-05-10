#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: contain a string
 */

void rev_string(char *s)
{
	int n = 0;
	int c = 0;
	char a[11	];

	while (s[n] != '\0')
	{
		a[n] = s[n];
		n++;
	}

	while (s[c] != '\0')
	{
		n--;
		s[c] = a[n];
		c++;
	}
}
