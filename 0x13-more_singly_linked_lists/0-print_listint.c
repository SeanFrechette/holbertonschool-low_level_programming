#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num;
	size_t count = 0;

	while (h)
	{
		num = h->n;
		printf("%d\n", num);
		h = h->next;
		count++;
	}
	return (count);
}
