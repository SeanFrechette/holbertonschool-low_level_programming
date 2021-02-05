#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int w, x, y, z;

	for (w = '0' ; w <= '9' ; w++)
	{
		for (x = '0' ; x <= '9' ; x++)
		{
			for (y = '0' ; y<= '9' ; y++)
			{
				for (z = '0' ; z <= '9' ; z++)
				{
					if (w > y || x > z)
					{
						putchar(y);
						putchar(z);
						putchar(' ');
						putchar(w);
						putchar(x);
						if (y != '9' || z != '8' || w != '9' || x != '9')
						{
							putchar(',');
							putchar(' ');
						}
						else
						{
							goto end;
						}
					}
				}
			}
		}
	}
	end:
	putchar(10);
	return (0);
}
