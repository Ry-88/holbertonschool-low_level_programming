#include "main.h"
/**
 * flip_bits - Returns the number of bits to flip to convert n to m
 * @n: The first number
 * @m: The second number
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = n ^ m;

	while (result)
	{
		if (result & 1)
			count++;
		result = result >> 1;
	}

	return (count);
}
