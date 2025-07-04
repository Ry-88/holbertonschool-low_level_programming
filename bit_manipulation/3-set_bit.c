#include "main.h"
#include <stddef.h>
/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: A pointer to the number to modify
 * @index: The index of the bit to set (starting from 0)
 * Return: 1 if it worked, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8) || n == NULL)
		return (-1);

	*n = *n | (1UL << index);
	return (1);
}
