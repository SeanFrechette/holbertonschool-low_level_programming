#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, which is initialized with a specific char
 * @size: size of array
 * @c: char input
 * Return: NULL if size = 0, otherwise return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *arr = (char*)malloc(size * sizeof(char));
	unsigned int i;

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
