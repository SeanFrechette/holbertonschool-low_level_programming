#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - returns a pointer to allocated memory, which contains a copy of str
 * @str: string input
 * Return: pointer to allocated memory
 */
char *_strdup(char *str)
{
	int len, i;

	if (str == NULL)
		return (NULL);
	for (len = 1; str[len]; len++)
	{}
	char *arr = (char*)malloc(len * sizeof(char));

	for (i = 0; i <= len; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}