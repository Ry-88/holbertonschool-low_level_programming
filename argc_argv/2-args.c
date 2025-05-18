#include <stdio.h>
/**
 * main - prints all arguments
 *
 * @argc: size of argv
 * @argv: arguments from command line
 *
 * Return: allways 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int n = 0;

	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}

	return (0);
}
