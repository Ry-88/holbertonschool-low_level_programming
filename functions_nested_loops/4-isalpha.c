#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check the alpha.
 *
 * @c: contain the value.
 *
 * Return: 1 if alpha 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
