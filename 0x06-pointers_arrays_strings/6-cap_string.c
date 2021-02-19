#include "holberton.h"
/**
 * cap_string - capitalize words of a string
 * @a: string input
 * Return: a
 */
char *cap_string(char *a)
{
	int i = 0, x = 0;
	char sep[] = ",\t\n ;.!?\"(){}";
	
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			while (sep[x] != '\0')
			{
				if (sep[x] == a[i - 1])
				{
					a[i] = a[i] - 32;
				}
				x++;
			}
		}
		i++;
	}
	return (a);
}
