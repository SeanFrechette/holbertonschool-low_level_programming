#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: input
 * @index: index of bit
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n = (*n & ~(1 << index));
		return (1);
	}
	return (-1);
}
