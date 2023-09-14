#include "main.h"

/**
 * print_line - function to print line
 * @n : integer value
 * Return: Always 0.
 */

void print_line(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
