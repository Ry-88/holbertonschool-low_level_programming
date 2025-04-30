#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	char C = 'a';
	char B = 'A';

	while (C <= 'z')
	{
		putchar(C);
		C++;
	}

	while (B <= 'Z')
	{
		putchar(B);
		B++;
	}

	putchar('\n');
	return (0);
}
