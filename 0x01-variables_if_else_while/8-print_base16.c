#include <stdio.h>
/**
 * main - function main
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = '0' ; x <= '9' ; x++)
	{
		putchar(x);
	}
	for (x = 'a' ; x <= 'f' ; x++)
	{
		putchar(x);
	}
	putchar(10);
	return (0);
}
