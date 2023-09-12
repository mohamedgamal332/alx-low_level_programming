#include "main.h"
#include <stdlib>

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
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
