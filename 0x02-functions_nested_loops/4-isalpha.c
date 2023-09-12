#include "main"

/**
 * _isalpha - checks whether the char is alphabet or not
 *
 * @c: is the char that will be checked
 *
 * Return: return 0 or 1
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0)
}
