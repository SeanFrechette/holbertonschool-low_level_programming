#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print all numbers from n to 98
 * @n: input
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else if (n == 98)
			{
				printf("%d\n", n);
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else if (n == 98)
			{
				printf("%d\n", n);
			}
			n--;
		}
	}
}
