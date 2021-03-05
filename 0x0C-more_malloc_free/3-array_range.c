#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - create an array that contains min-max
 * @min: min val
 * @max: max val
 * Return: 
 */
int *array_range(int min, int max)
{
	int *arr, i, size = (max - min + 1);

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
