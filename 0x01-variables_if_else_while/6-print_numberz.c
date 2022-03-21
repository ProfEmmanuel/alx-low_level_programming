#include <stdio.h>

/**
 * main - Print digit 0 to 9 using putchar
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
	putchar(newline);
	return (0);
}
