#include "main.h"
/**
 * cap_string - change to uppearcase
 *
 * @str: contain a string
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int n = 0, a = 1;

	while (str[n] != '\0')
	{
		if (a && str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] = str[n] - 32;
			a = 0;
		} else if (!((str[n] >= 'A' && str[n] <= 'Z') ||
				(str[n] >= 'a' && str[n] <= 'z')))
		{
			a = 1;
		}
		else
		{
			a = 0;
		}
		if (str[n] == '\t')
		{
			str[n] = ' ';
		}
		n++;
	}

	return (str);
}
