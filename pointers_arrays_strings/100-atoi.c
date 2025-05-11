#include "main.h"
#include <ctype.h>
/**
 * _atoi - get the integer from string
 *
 * @s: contain a string to check
 *
 * Return: 0 if no number
 */

int _atoi(char *s)
{
	int n = 0, num = 0, found = 0, sign = 1;

	while (s[n] != '\0')
	{
		if (s[n] == '-' && isdigit(s[n + 1]))
		{
			sign = -1;
			n++;
		}

		if (isdigit(s[n]))
		{
			found = 1;
			num = 0;

			while (isdigit(s[n]))
			{
				num = num * 10 + (s[n] - '0');
				n++;
			}
			break;
		}
		n++;
	}
	if (found)
	{
		return (num * sign);
	}
	else
	{
		return (1);
	}
}
