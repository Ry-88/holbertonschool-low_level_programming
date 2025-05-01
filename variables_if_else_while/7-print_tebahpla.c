#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char C = 'z';

	while (C >= 'a')
	{
		putchar(C);
		C--;
	}

	putchar('\n');
	return (0);
}
