#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char i;
	for (i = "a"; i <= "z"; ++i)
	{
		_putchar(i);
	}

	return;
}
