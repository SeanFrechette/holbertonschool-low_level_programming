#include "holberton.h"
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number
 * Return: the natural square root, or -1 if n doesn't have one
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (sqrtHelper(n, 1));
}

int sqrtHelper(int n, int i)
{
    if (n < (i * i))
        return (-1);
    else if (n == (i * i))
        return (i);
    else
        return (sqrtHelper(n, i + 1));
}