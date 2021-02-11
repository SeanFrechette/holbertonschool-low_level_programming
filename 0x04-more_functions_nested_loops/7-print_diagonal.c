#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of lines
 * Return: 0
 */
void print_diagonal(int n)
{
	int x, y, i = 0;
	
	for (x = 0 ; x < n ; x++)
	{
		for (y = 0 ; y < i ; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
