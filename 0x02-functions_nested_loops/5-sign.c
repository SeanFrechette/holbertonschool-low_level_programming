#include "holberton.h"
/**
 * print_sign - prints sign of a number
 * @n: input
 * Return: 1 if positive, 0 if equal to 0, -1 if negative
 */
int print_sign(int n)
{
	int num = n;

	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
