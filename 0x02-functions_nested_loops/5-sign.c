#include "main.h"

/**
 * print_sign - checks the sign of c
 * @c: integer
 *
 * Return: Return the sign of c
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
