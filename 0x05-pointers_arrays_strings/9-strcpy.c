#include "holberton.h"
/**
 * _strcpy - copies the string, pointed to by src, to dest
 * @dest: Buffer pointer
 * @src: String input
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, x;

	while (src[len] != '\0')
	{
		len++;
	}

	for (x = 0; x <= len; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
