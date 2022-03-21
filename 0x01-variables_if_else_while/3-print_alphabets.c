#include <stdio.h>

/**
 * main - Prints the lowercase and uppercase letters of english
 *
 * Return: 0
 */
int main(void)
{
	int i = 97;
	int newline = 10;

	do {
		putchar(i);
		i++;
	} while
	(i <= 122);
	i = 65;
	do {
		putchar(i);
		i++;
	} while
	(i <= 90);
	putchar(newline);
	return (0);
}
