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
	char C = 48;

	while (C <= 57)
	{
		putchar(C);
		C++;
		if (C == 58)
		{
			C = 97;
			while (C <= 102)
			{
				putchar(C);
				C++;
			}
		}
	}

	putchar('\n');
	return (0);

}
