#include "holberton.h"
/**
 * cap_string - capitalize words of a string
 * @a: string input
 * Return: a
 */
char *cap_string(char *a)
{
	int i = 0, x;
	char sep[] = {" \t\n,;.!?\"(){}"};

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			for (x = 0; sep[x] != '\0'; x++)
			{
				if (sep[0] >= 'a' && sep[0] <= 'z')
				{
					sep[0] = sep[0] - 32;
				}
				if (sep[x] == a[i - 1])
				{
					a[i] = a[i] - 32;
				}
			}
		}
		i++;
	}
	return (a);
}
