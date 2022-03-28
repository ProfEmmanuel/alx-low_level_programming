#include "main.h"

/**
 * print_last_digit -  Compute the last digit of c
 * @c: An integer
 *
 * Return: Returns the last digit
 */
int print_last_digit(int c)
{
	int last_digit;

	if (c >= 0)
	{
		last_digit = c % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = c % 10;
		_putchar(-last_digit + '0');
		return (-last_digit);
	}
	return (0);
}
