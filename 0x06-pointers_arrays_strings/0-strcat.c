#include "holberton.h"
/**
 * _strcat - append src to dest
 * @dest: Main string
 * @src: appends to dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, x = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	while (src[x] != '\0')
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (dest);
}
