#include "holberton.h"
#include <stdio.h>
/**
 * main - print name of program
 * @argc: array length
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}