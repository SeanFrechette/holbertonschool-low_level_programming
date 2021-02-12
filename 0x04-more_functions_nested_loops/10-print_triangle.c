#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int x, y;

	for (y = 1 ; y <= size ; y++)
	{
		for (x = size - y ; x > 0 ; x--)
		{
			_putchar(' ');
		}
		for (x = y ; x > 0 ; x--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
