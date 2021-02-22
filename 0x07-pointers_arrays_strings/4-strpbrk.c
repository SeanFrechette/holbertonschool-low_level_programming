#include "holberton.h"
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: input
 * @accept: input
 * Return: return byte in s that matches accept, or null if no byte exists
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (accept[y] != '\0')
			return (s + x);
	}
	return ('\0');
}
