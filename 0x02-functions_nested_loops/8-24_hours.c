#include "main.h"

/**
 * jack_bauer - entry point
 *
 * Return: every second
 */

void jack_bauer(void)
{
	int i = 0;
	int s;

	while (i < 24)
	{
		i++;
		s = 0;
		while (s < 60)
		{
			s++;
			_putchar(i)
			_putchar(':')
			_putchar(s)
			_putchar('\n')
		}
	}
}
