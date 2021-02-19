#include "holberton.h"
/**
   * rot13 - check the code for Holberton School students.
    *@n: the variable
     *Return: n variable
      */
char *rot13(char *a)
{
	int x, y;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; a[x] != '\0'; x++)
	{
		for (y = 0; alpha[y] != '\0'; y++)
		{
			if (a[x] == alpha[y])
			{
				a[x] = rot[y];
				break;
			}
		}
	}
	return (a);
}
