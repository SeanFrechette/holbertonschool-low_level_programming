#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: returns the number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[j] != '\0'; j++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (accept[y] == '\0')
		{
			break;
		}
	}
	return (i);
}
