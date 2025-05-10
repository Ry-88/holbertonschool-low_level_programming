#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: contain a string
 */

void rev_string(char *s)
{
	int start = 0, end = 0;
	char count;

	while (s[end] != '\0')
	{
		end++;
	}

	end--;

	while (start < end)
	{
	count = s[start];
	s[start] = s[end];
	s[end] = count;
	start++;
	end--;
	}
}
