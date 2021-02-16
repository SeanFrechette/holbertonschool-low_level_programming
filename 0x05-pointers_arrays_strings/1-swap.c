#include "holberton.h"
/**
 * swap_int - swaps the values for *a and *b
 * @a: input 1
 * @b: input 2
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
