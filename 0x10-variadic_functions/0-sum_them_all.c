#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all perameters
 * @n: num of args
 * Return: returns the sum of all perameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg;
	
	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);
}
