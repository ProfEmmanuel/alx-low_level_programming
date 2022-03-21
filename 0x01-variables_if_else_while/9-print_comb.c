#include <stdio.h>

/**
 * main - Print digits 0 to 9 seperated by comma and space
 *
 * Return: 0
 */
int main(void)
{
	int i = 48,comma = 44, space = 32, newline = 10;

	do {
		putchar(i);
		if(i < 57)
		{
			putchar(comma);
			putchar(space);
			i++;
		}
		else
		{
			i++;
		}
	} while
	(i <= 57);
	putchar(newline);
	return (0);
}
