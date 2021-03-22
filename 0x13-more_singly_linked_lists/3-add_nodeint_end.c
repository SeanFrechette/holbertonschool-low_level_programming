#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: Address to node
 * @n: int input
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list;
	listint_t *temp = *head;

	if (!head)
		return (NULL);

	list = malloc(sizeof(listint_t));
	if (!list)
		return (NULL);

	list->next = NULL;
	list->n = n;
	
	if (!*head)
	{
		*head = list;
		return (list);
	}
	
	while (temp->next)
		temp = temp->next;

	temp->next = list;

	return (*head);
}
