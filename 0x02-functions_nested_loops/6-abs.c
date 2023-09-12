#include "main.h"

/**
 * _abs - computes the absolute value of a number
 *
 * @n: number of interest and its an int
 *
 * Return: retuns the the absolute value wanted
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
