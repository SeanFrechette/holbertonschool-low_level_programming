#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 'z' ; x >= 'a' ; x--)
	{
		putchar(x);
	}
	putchar(10);
	return (0);
}
