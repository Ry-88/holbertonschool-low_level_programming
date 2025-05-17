#include "main.h"
/**
 * _print_rev_recursion - print a strint rev by recursion
 *
 * @s: contain a string to print
 */

void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(s[0]);
}
