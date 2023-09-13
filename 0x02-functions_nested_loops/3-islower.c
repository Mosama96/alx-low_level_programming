#include "main.h"
/**
 * _islower - checks if c is capital or small
 * Return: returns zero or one
 * @c: input
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
