#include "holberton.h"
/**
 * _strncat - appends n bytes from src
 * @dest: main String
 * @src: string to append to dest
 * @n: prints at most n bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, x = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	while (src[x] != '\0')
	{
		if (x < n)
		{
			dest[i + x] = src[x];
		}
		x++;
	}
	return (dest);
}
