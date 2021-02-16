#include "holberton.h"
/**
 * rev_string - reverses string
 * @s: input
 */
void rev_string(char *s)
{
	int x = 0;
	int i = 0;
	int temp = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (x = 0 ; x < i / 2; x++)
	{
		temp = s[x];
		s[x] = s[i - 1 - x];
		s[i - 1 - x] = temp;
	}
}
