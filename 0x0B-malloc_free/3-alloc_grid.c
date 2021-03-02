#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of ints
 * @width: x input
 * @height: y input
 * Return: returns a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)calloc(height, sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = calloc(width, sizeof(int));
	}
	return (arr);
}
