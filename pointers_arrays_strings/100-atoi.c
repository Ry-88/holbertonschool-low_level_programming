#include "main.h"
#include <limits.h>
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
		if (s[n] == '-' && !found)
		{
			sign *= -1;
		} else if (s[n] == '+' && !found)
		{
			;
		} else if (s[n] >= '0' && s[n] <= '9')
		{
			found = 1;
			if (sign == 1)
			{
				if (num > (INT_MAX - (s[n] - '0')) / 10)
				{
					break;
				}
				num = num * 10 + (s[n] - '0');
			}
			else
			{
				if (num < (INT_MIN + (s[n] - '0')) / 10)
				{
					break;
				}
				num = num * 10 - (s[n] - '0');
			}
		} else if (found)
		{
			break;
		}

		n++;
	}

	return (num);
}
