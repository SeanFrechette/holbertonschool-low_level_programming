#include "holberton.h"
/**
 * _puts - prints a string followed by a newline
 * @str - string input
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != NULL ; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
