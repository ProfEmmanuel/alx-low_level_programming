#include <stdio.h>

/**
 * main - Print digits 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	do {
		printf("%d", i);
		i++;
	} while
	(i <= 9);
	printf("\n");
	return (0);
}
