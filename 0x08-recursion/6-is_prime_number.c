#include "holberton.h"
/**
 * is_prime - finds if n is prime
 * @n: number input
 * @i: iteration
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(int n, int i)
{
    if (n == i)
        return (1);
    if (n % i == 0)
        return (0);
    return (is_prime(n, i + 1));
}

/**
 * is_prime_number - finds if n is prime
 * @n: number
 * Return: returns 1 if n is prime, or 0 if otherwise
 */
int is_prime_number(int n)
{
    if (n < 2 || (n % 2 == 0 && n != 2))
        return (0);
    return (is_prime(n, 2));
}