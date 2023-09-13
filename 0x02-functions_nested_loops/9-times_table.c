#include "main.h"

/**
 * times_table - prints all time tables from zero to nine
 */
void times_table(void)
{
	int i, j, multi;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			multi = j * i;
			if (j == 0)
			{
				_putchar(multi + '0');
			}

			if (multi < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			} else if (multi >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
