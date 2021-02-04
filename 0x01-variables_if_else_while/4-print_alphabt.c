#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar(10);
	return (0);
}
