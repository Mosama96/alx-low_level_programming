#include <stdio.h>

/**
 * main - prints letters
 *
 * Return: returns 0
 */
int main(void)
{
	int i = 0;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
