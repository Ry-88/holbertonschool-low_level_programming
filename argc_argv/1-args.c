#include <stdlib.h>
#include <stdio.h>
/**
 * main - return the number of arguments
 *
 * @argc: contain a size of argv
 * @argv: contain arguments from command line
 *
 * Return: allways 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
