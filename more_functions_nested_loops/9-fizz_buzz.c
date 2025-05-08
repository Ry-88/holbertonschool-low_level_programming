#include <stdio.h>
/**
 * main - check the code
 *
 * Return: 0
 */

int main(void)
{
	int n = 1;
	int three;
	int five;
	int all;

	while (n <= 100)
	{
		three = (n % 3);
		five = (n % 5);
		all = (three + five);

		if (all == 0)
		{
			printf("FizzBuzz ");
			n++;
			continue;
		}
		else if (three == 0)
		{
			printf("Fizz ");
			n++;
			continue;
		}
		else if (five == 0)
		{
			printf("Buzz ");
			n++;
			continue;
		}
		printf("%d ", n);
		n++;
	}

	printf("\n");
	return (0);
}
