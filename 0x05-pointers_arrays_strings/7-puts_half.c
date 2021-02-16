#include "holberton.h"
/**
 * puts_half - prints half of the string
 * @str: input
 */
void puts_half(char *str)
{
	int i = 0, x;

	while (str[i] != NULL)
	{
		i++;
	}
	for (x = 0; x < i; x++)
	{
		if (x > (i - 1) / 2)
		{
			_putchar(str[x]);
		}
	}
	_putchar(10);
}
