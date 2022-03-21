#include <stdio.h>

/**
 * main - Print all lowercase letters except q and e
 *
 * Return: 0
 */
int main(void)
{
	int i = 97, newline = 10;

	do {
		if (i == 101) {
			i++;
		}
		else if (i == 113) {
			i++;
		}
		else {
			putchar(i);
			i++;
		}
	} while
	(i <= 122);
	putchar(newline);
	return (0);
}
