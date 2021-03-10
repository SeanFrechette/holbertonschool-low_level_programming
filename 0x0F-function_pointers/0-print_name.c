#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - selects which function to parse "name" through
 * @name: string input
 * @f: function to parse "name"
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
