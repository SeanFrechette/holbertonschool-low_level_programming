#include "holberton.h"
#include <stdlib.h>
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
