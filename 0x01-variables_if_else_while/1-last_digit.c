#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: a random number and if the last digit is less than 5 or 6
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	printf("Last digit of %d is %d ", n, lastdigit);
	if (lastdigit > 5)
	{
		printf("and is greater than 5");
	}
	else if (lastdigit == 0)
	{
		printf("and is 0");
	}
	else if ((lastdigit < 6) & (lastdigit != 0))
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
