#include "holberton.h"
/**
 * times_table - prints 9x9 times table
 *
 * Return: 0
 */
void times_table(void)
{
	int x, y, z;

	for (y = 0 ; y <= 9 ; y++)
	{
		for (x = 0 ; x <= 9 ; x++)
		{
			z = x * y;
			if (z <= 9)
			{
				if (x != 0)
				{
					_putchar(' ');
				}
				_putchar(z + '0');
			}
			else if (z == 0)
			{
				_putchar(z + '0');
			}
			else
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
