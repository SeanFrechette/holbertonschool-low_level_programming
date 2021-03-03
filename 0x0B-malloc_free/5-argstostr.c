#include "holberton.h"
#include <stdlib.h>
char *argstostr(int ac, char **av)
{
	char *str, *strout;
	int i, j, n;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
	}
	n += 1;
	str = (char*)malloc(n * sizeof(char));
	if (str == NULL)
		return (NULL);
	strout = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			*str = av[i][j];
			str++;
		}
		*str = '\n';
		str++;
	}
	return (strout);
}