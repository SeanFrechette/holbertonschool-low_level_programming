#include "lists.h"
/**
 * listint_len - return num of elements in a linked list
 * @h: pointer to listint_t
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
