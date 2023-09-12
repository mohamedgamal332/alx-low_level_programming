#include "main.h"

/**
 * print_sign - accepts a number and tells its sign
 *
 * @n: the number of intrest
 *
 * Return: returns 1 and 0 and -1 according to the sign
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (+1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (00);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
