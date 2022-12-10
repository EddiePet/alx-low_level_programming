#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of a randomly generated number
 * and whether it is greater than 5, less tahn 6, or 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char last[] = "last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf(" 0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
