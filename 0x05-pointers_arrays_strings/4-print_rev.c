#include "holberton.h"
/**
 * print_rev - print input in reverse
 * @s: string input
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i-- ; i > 0 ; i--)
	{
		_putchar(i);
	}
	_putchar(10)
}
