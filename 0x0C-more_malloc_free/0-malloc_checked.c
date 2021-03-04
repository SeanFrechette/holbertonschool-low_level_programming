#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked -  allocates memory
 * @b: size of allocated memory
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit (98);
	return (mem);
}