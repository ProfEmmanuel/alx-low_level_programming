#include "main.h"

/**
 * times_table - Print te times table for 9
 *
 * Return: nothing
 */
void times_table(void)
{
	int i, j, product = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (j == 0)
			{
				_putchar(product + '0');
			}
			else if (product >= 10)
			{
				_putchar(' ');
				_putchar(product / 10  + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
