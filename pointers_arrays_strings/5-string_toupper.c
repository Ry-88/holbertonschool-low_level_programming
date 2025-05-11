#include "main.h"
/**
 * string_toupper - change to uppercase
 *
 * @str: contain a string
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] = str[n] - 32;
		}
		n++;
	}

	return (str);
}
