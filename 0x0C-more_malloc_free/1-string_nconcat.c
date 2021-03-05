#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: String input 1
 * @s2: String input 2
 * @n: num of chars to print for s2
 * Return: concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *arr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	arr = malloc((len1 + len2 + 1) * sizeof(char));
	if (!arr)
		return (NULL);

	for (i = 0; i <= len1; i++)
			arr[i] = s1[i];
	for (i = 0; i <= n; i++)
	{
		arr[i + len1] = s2[i];
		if (i == n)
		{
			arr[len1 + n] = '\0';
		}
	}
	return (arr);
}
