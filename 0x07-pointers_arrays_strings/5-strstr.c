#include "holberton.h"
/**
 * _strstr - locates a sub string
 * @haystack: String
 * @needle: target substring
 * Return: a pointer to the substring, or null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;
	
	if (needle[0] == '\0')
		return (haystack);

	for (x = 0; haystack[x]; x++)
	{
		for (y = 0; needle[y]; y++)
		{
			if (haystack[x + y])
		}
	}
	return ('\0');
}
