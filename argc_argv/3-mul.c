#include <stdio.h>
#include <stdlib.h>
/**
 * main - print multiplies two numbers
 *
 * @argc: size of argv
 * @argv: contain arguments
 *
 * Return: if success 0 or 1 if not
 */

int main(int argc, char *argv[])
{
	int n, n2, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n * n2;
	printf("%d\n", result);

	return (0);
}
