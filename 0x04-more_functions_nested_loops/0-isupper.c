#include "main.h"

/**
 * _isupper - a fun that chechs if char is lower or not
 *
 * @c: is the char of intrest
 *
 * Return: 1 ig true and 0 otherwize
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
