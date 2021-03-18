#include "lists.h"
/**
 * print_list - prints elements of list_t
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	char *str;
	unsigned int len;
	size_t count = 0;

	while (h)
	{
		str = h->str;
		len = h->len;
		if (str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", len, str);
		
		h = h->next;
		count++;
	}
	return (count);
}