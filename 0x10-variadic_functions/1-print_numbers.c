#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string printed between nums
 * @n: num of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
