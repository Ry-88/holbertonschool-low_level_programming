#include "main.h"
/**
 * _puts_recursion - print a string by recursion
 *
 * @s: contain a string to print
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	s++;
	_puts_recursion(s);
}
