#include "holberton.h"
/**
 * leet - encoded a string in leet speak
 * @a: input
 * Return: encoded string
 */
char *leet(char *a)
{
	int x = 0, y = 0;
	char alpha[] = "aeotl";
	char upperAlpha[] = "AEOTL";
	char num[] = "43071";

	while (a[x] != '\0')
	{
		for (y = 0; alpha[y] != '\0'; y++)
		{
			if (a[x] == alpha[y] || a[x] == upperAlpha[y])
			{
				a[x] = num[y];
			}
		}
		x++;
	}
	return (a);
}
