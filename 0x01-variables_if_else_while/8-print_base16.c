#include <stdio.h>

/**
 * main - Prints all the number of base16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i = 48, newline = 10;

	do {
		putchar(i);
		i++;
	} while
	(i <= 57);
	i = 97;
	do {
		putchar(i);
		i++;
	} while
	(i <= 102);
	putchar(newline);
	return (0);
}
