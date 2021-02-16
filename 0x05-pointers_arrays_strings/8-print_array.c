#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: Array Input
 * @n: n number of elements
 */
void print_array(int *a, int n)
{
	int len = sizeof(a) / sizeof(a[0]);

	for (; n < len; n++)
	{
		printf("%d, ", a[n]);
	}
	printf('\n');
}
