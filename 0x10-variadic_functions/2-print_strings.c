#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string printed between nums
 * @n: num of args
 * 
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator)
		printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}