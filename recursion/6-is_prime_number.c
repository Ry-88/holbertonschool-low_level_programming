#include "main.h"

int check_prime(int n, int a);
/**
 * is_prime_number - check if prime number or not
 *
 * @n: contain a number to ckeck
 *
 * Return: 1 if prime number or 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if prime number or not
 *
 * @n: number to check
 * @a: iteration times
 *
 * Return: 1 if prime number or 0
 */

int check_prime(int n, int a)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % a == 0 && a > 1)
	{
		return (0);
	}
	if ((n / a) < a)
	{
		return (1);
	}

	return (check_prime(n, a + 1));
}
