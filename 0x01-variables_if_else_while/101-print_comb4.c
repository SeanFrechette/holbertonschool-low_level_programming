#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int x, y, z;

	for (x = '0' ; x <= '9' ; x++)
	{
		for (y = '0' ; y <= '9' ; y++)
		{
			for (z = '0' ; z <= '9' ; z++)
			{
				if (z > y)
				{
					if (y > x)
					{
						putchar(x);
						putchar(y);
						putchar(z);
						if (x != '7' || y != '8' || z != '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
