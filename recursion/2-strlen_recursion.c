#include "main.h"
/**
 * _strlen_recursion - return a number of string
 *
 * @s: contain a string to count
 *
 * Return: number of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
