#include <unistd.h>

/**
 *  * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putchar(char c);

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
