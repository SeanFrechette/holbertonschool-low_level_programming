#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: number of bytes in the segment which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (accept[y] == '\0')
		{
			break;
		}
	}
	return (x);
}
