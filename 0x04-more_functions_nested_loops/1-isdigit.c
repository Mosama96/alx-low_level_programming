#include "main.h"

/**
 * _isdigit - checks if number is digit
 * @c: function argument
 * Return: gives 0 or 1 depending on the argument
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
