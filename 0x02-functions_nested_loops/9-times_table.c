#include "main.h"

/**
 * times_table - is the function
 *
 * Return: the table
 */

void times_table(void)
{
	int i = 1, j = 1, result;

	_putchar('0');
	_putchar(',');

	while (i < 10)
	{
		while (j < 10)
		{
			result = i * j;
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
			j++;
		}
		i++;
	}
	_putchar('$');
	_putchar('\n');
}
