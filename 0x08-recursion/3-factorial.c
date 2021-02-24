#include "holberton.h"
/**
 * factorial - returns the factorial of n
 * @n: input
 * Return: factorial of n, or -1 if less than 0
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
