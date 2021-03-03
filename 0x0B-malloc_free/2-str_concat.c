#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string input 1
 * @s2: string input 2
 * Return: a pointer to the newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	arr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
		for (i = 0; i <= len1; i++)
			arr[i] = s1[i];

		for (i = 0; i <= len2; i++)
			arr[i + len1] = s2[i];

		return (arr);
}
