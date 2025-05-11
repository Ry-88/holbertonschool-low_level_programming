#include "main.h"
/**
 * leet - change a latter
 *
 * @str: contain a string
 *
 * Return: str
 */

char *leet(char *str)
{
	char letter[] = "aAeEoOtTlL";
	char num[]   = "4433007711";
	int n, a;

	for (n = 0; str[n] != '\0'; n++)
	{
		for (a = 0; a < 10; a++)
		{
			if (str[n] == letter[a])
			{
				str[n] = num[a];
			}
		}
	}
	return (str);
}
