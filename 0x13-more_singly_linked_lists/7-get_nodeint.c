#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: Pointer to list
 * @index: index of node
 * Return: node at the nth position, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; i != index; i++)
	{
		if (!head)
			return (NULL);

		head = head->next;
	}
	return (head);
}
