#include "holberton.h"
/**
 * more_numbers - prints 0 to 14 ten times
 * Return: 0
 */
void more_numbers(void)
{
	int i, x;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (x = 0 ; x <= 14 ; x++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
