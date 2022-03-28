#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 *
 * Return: returns nothing
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
