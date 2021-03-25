#include "holberton.h"
/**
 * power_func - exponent
 * @n: base num
 * @e: exponent
 * Return: c^d
 */
int power_func(int n, int e)
{
      int val = 1;
      int count = 1;
      while(count <= e) 
      {
            val = val * n;
            count++;
      }
      return val;
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary input
 * Return: converted int
 */
unsigned int binary_to_uint(const char *b)
{
	size_t num = 0;
	int i = 0, x = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			num += power_func(2, x);
		x++;
	}
	return (num);
}
