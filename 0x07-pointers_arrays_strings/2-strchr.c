#include "holberton.h"
/**
 * _strchr - locates a char in a string
 * @s: String
 * @c: char to locate
 * Return: pointer to first occurence of c, or null if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
