#include "main.h"
#include <ctype.h>
/**
 * _islower - check the lowercase.
 *
 * @c: get a value.
 *
 * islower check lowercase.
 *
 * Return: 1 or 0 .
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
