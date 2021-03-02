#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string input 1
 * @s2: string input 2
 * Return: a pointer to the newly allocated space in memory, which contains s1 followed by s2
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *arr;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else if (s2 == NULL)
	{
		len2 = 0;
	}

	for (len1 = 1; s1[len1]; len1++)
	{}
	for (len2 = 1; s2[len2]; len2++)
	{}
	arr = (char*)malloc((len1 + len2) * sizeof(char));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= len1; i++)
		arr[i] = s1[i];
	for (i = 0; i <= len2; i++)
		arr[i + len1] = s2[i];
	return (arr);
}