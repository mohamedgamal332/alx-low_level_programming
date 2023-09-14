#include "main.h"

/**
 * more_numbers - fun that prints 10x from 0 to 14
 *
 * Return: the nums
 */

void more_numbers(void)
{
	char i;
	char c;

	for (i = '0'; i < '10'; i++)
	{
		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
