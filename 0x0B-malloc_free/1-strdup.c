#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - returns a pointer to a copy of str
 * @str: string input
 * Return: pointer to allocated memory
 */
char *_strdup(char *str)
{
	int len, i;
	char *arr;

	if (str == NULL)
		return (NULL);
	for (len = 1; str[len]; len++)
	{}
	arr = (char *)malloc(len * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
