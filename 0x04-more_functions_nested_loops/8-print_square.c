#include "holberton.h"
/**
 * print_square - prints an NxN square
 * @size: size of square
 * Return: 0
 */
void print_square(int size)
{
	int x, y = 0;

	for (y = 0 ; y < size ; y++)
	{
		for (x = 0 ; x < size ; x++)
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
