#include <stdio.h>

/**
 * main - Print letter in lowercase in reverse order
 *
 * Return: 0
 */
int main(void)
{
	int i = 122, newline = 10;

	do {
		putchar(i);
		i--;
	} while
	(i >= 97);
	putchar(newline);
	return (0);
}
