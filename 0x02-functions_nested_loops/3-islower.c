#include "holberton.h"
/**
 * _islower - checks if lowercase
 * @c: input
 * Return: 1 if lower, 0 otherwise
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}
