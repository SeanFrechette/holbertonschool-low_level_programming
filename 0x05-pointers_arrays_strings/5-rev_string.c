#include "holberton.h"
/**
 * rev_string - reverses string
 * @s: input
 */
void rev_string(char *s)
{
	int x = 0;
	int i = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	char temp[x];

	for (x-- ; x >= 0 ; x--)
	{
		temp[i] = s[x];
		i++;
	}
	for (x = 0 ; x < i ; x++)
	{
		s[x] = temp[x];
	}
}
