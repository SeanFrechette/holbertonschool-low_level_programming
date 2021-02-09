#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x, a;

	for (x = 0 ; x <= 10 ; x++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
