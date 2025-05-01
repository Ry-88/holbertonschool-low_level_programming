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
	int C = 0;

	while (C <= 9)
	{
		printf("%d",C);
		C++;
	}

	putchar('\n');
	return (0);
}
