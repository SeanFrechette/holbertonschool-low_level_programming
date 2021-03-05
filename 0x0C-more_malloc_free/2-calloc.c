#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory
 * @nmemb: num of elemements
 * @size: size of bytes
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (!str)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		str[i] = 0;
	return (str);
}
