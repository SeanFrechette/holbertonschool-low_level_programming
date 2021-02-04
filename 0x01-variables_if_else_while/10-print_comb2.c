#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = '0' ; x <= '9' ; x++)
	{
		for (y = '0' ; y <= '9' ; y++)
		{
			putchar(x);
			putchar(y);
			if (y != '9' || x != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
