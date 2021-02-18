#include "holberton.h"
/**
 * reverse_array - reverses an array of ints
 * @a: array of ints
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int x = 0, temp;

	for (n--; x <= n; n--, x++)
	{
		temp = a[n];
		a[n] = a[x];
		a[x] = temp;
	}
}
