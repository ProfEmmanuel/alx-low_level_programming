#include <stdio.h>

/**
 * main: It print the lowercase alphabet
 *
 * Return: 0
 */
int main(void)
{
	int i = 97;
	int newline = 10;

	do{
		putchar(i);
		i++;
	}while (i < 123);
	putchar(newline);
	return (0);
}
