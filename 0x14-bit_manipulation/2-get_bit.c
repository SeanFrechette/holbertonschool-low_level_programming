#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: int input
 * @index: index of bit
 * Return: the value of the bit at index index, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);
	else
	{
		if (n & (1 << index))
			return (1);
		else
			return (0);
	}
	return (-1);
}
