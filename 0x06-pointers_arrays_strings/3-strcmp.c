#include "holberton.h"
int _strcmp(char *s1, char *s2)
{
	int x, ;

	for (x = 0; s1[x] == s2[x] && (s1[x] != '\0' && s2[x] != '\0'); x++)
	{}
	return (s1[x] - s2[x]);
}
