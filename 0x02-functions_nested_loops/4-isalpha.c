#include "main.h"
/**
 * _isalpha - checks if c is alphabet
 * @c: user input
 * Return: returs zero or one
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
