#include "holbeton.h"
/**
 * _isalpha - finds if c is a letter
 * @c: input
 * Return: 0 if false, 1 if true
 */
int _isalpha(int c)
{
	int ch = c;

	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
	{
		return (1);
	}
	return (0);
}
