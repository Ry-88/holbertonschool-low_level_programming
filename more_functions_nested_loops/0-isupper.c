#include "main.h"
#include <ctype.h>
/**
 * _isupper - check the latter
 *
 * @c: contain latter
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
