#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 *
 * @argc: size of argv
 * @argv: contain an arguments from command line
 *
 * Return: allways 0 or 1 if not digit
 */

int main(int argc, char *argv[])
{
	int num = 1, count = 0;

	if (argc > 1)
	{
		while (num < argc)
		{
			if (isdigit(*argv[num]))
			{
				count += atoi(argv[num]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			num++;
		}

	}

	printf("%d\n", count);

	return (0);
}
