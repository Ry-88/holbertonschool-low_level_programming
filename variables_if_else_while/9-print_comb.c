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
	int C = 48;

	while (C <= 57)
	{
		putchar(C);
		if (C == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		C++;
	}

	putchar('\n');
	return (0);
}
