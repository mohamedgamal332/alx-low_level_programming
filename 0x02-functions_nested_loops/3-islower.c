#include "main.h"
#include <ctype.h>

/**
 * _islower - accepts an int c
 *
 * @c is an integer that is passed to the function (internally a char)
 *
 * Return: 1 if lower and 0 if non lower
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}

	return (0);
}
