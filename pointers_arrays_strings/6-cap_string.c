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
		if (str[n] == ' ' || str[n] == '\t' || str[n] == '\n' ||
			str[n] == ',' || str[n] == ';' || str[n] == ',' ||
			str[n] == '!' || str[n] == '?' || str[n] == '"' ||
			str[n] == '(' || str[n] == ')' || str[n] == '{' ||
			str[n] == '}'
		   )
		{
			a = 1;
		} else if (a && str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] = str[n] - 32;
			a = 0;
		}
		n++;
	}

	return (str);
}
