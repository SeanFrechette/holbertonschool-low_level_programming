#include "holberton.h"
/**
 * print_binary_rec - recursively loop through n
 * @n: decimal input
 */
void print_binary_rec(unsigned long int n)
{
	if (n != 0)
	{
		print_binary_rec(n >> 1);
		putchar((n & 1) ? '1' : '0');
	}
}
/**
 * print_binary - prints the binary representation of a number
 * @n: decimal input
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		putchar('0');
	else
		print_binary_rec(n);
}
