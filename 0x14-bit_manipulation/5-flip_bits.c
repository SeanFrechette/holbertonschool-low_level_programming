#include "holberton.h"
/**
 * flip_bits - returns the number of bits needed to flip
 * @n: input 1
 * @m: input 2
 * Return: 
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	size_t flip = n ^ m;

	while (flip > 0)
	{
		if (flip & 1)
			count += 1;
		flip = flip >> 1;
	}
	return (count);
}
