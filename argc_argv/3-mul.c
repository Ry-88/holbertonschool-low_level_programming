#include <stdio.h>
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

	n = *argv[1] - '0';
	n2 = *argv[2] - '0';
	result = n * n2;
	printf("%d\n", result);

	return (0);
}
