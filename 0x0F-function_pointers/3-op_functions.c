#include "3-calc.h"
/**
 * op_add - add two ints
 * @a: input 1
 * @b: input 2
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two ints
 * @a: input 1
 * @b: input 2
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two ints
 * @a: input 1
 * @b: input 2
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two ints
 * @a: input 1
 * @b: input 2
 * Return: result of a divided by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find remainder of two ints
 * @a: input 1
 * @b: input 2
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
