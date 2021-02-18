#include "holberton.h"
/**
 * _strncpy - copies a string, src to dest
 * @dest: return copied string
 * @src: string to be copied
 * @n: amount of chars to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
