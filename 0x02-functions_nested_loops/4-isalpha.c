#include "holberton.h"
/**
 * _isalpha - finds if c is a letter
 * @c: input
 * Return: 0 if false, 1 if true
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
