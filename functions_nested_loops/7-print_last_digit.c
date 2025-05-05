#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - check the code.
 *
 * @n: contain the value
 *
 * Return: n
 */

int print_last_digit(int n)
{
	int result = abs(n % 10);

	_putchar(result + '0');

	return (result);
}
