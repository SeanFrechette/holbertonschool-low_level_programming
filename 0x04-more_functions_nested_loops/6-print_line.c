#include "holberton.h"
/**
 * print_line - draws a strait line
 * @n: line length
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
