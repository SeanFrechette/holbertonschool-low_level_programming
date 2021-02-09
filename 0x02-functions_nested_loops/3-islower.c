#include "holberton.h"
/**
 * _islower - checks if lowercase
 *
 * Return: 1 if lower, 0 otherwise
 */
int _islower(int c)
{
	int ch = c;

	if (ch <= 'z' && ch >= 'a')
	{
		return (1);
	}
	return (0);
}
