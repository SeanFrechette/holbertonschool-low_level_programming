#include "holberton.h"
/**
 * find_length - find length of s
 * @s: string input
 * @i: iterator
 * Return: length of s
 */
int find_length(char *s)
{
	if (!(*s))
		return (0);
	else
		return (1 + find_length(s + 1));
}

/**
 * helper_palindrome - finds if s is a palindrome
 * @s: string input
 * @length: length of s
 * return: 1 if s is a palindrome, 0 otherwise
 */
int helper_palindrome(char *s, int length)
{
	if (*s != *(s + length - 1))
		return (0);
	else if (!(*s))
		return (1);
	return (helper_palindrome(s + 1, length - 2));
}

/**
 * is_palindrome - finds if s is a palindrome
 * @s: string input
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = find_length(s);
	return (helper_palindrome(s, length));
}