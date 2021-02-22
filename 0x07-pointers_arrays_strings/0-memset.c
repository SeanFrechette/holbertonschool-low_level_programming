#include "holberton.h"
/**
 * _memset - fills memory with a consistant byte
 * @s: buffer
 * @b: byte input
 * @n: number of bytes to fill
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
