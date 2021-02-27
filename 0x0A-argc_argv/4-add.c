#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print name of program
 * @argc: array length
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(*argv[i] >= '0' && *argv[i] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
	printf("%i\n", sum);
	}
	return (0);
}