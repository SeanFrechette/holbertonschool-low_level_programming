#include "holberton.h"
/**
 * _strlen_recursion - returns string length
 * @s: string input
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
