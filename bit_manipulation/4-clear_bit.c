#include "main.h"
#include <stddef.h>
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: A pointer to the number to modify
 * @index: The index of the bit to clear (starting from 0)
 * Return: 1 if it worked, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8) || n == NULL)
		return (-1);

	*n = *n & ~(1UL << index);
	return (1);
}
