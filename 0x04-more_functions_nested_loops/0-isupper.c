#include "main.h"

/**
 *_isupper - checks if input is upper case
 * @c: function parameter
 * Return: 1 if uppercase and 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

