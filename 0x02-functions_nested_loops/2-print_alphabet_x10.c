#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *
 * Return: Returns nothing
 */
void print_alphabet_x10(void)
{
	int i = 1;
	while (i <= 10)
	{
		char letter = 'a';
		while ( letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		i++;
		_putchar('\n');
	}
}
