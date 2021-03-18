#include "lists.h"
/**
 * list_len - return number of elements in list_t
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
