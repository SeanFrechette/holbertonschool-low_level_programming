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
	int i;

	if (argc <= 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++){
		if (!(*argv[i] >= '0' && *argv[i] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
			break;
		}
	}
	return (0);
}