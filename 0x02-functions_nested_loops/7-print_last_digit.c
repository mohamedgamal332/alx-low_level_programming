#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number of interest
 *
 * Return: the last digit of the input number
 */

int print_last_digit(int n)
{
	last_dig = n % 10;

	if (n < 0)
	{
		last_dig *= -1;
	}
	return (last_dig);
}
