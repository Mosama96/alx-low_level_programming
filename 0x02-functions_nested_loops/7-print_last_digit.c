#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = n * -1;

	last = n % 10;

	if (last < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
