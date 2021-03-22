#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: address to node
 * @n: int input
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	if (!head)
		return (NULL);

	list = malloc(sizeof(listint_t));
	if (!list)
		return (NULL);

	list->n = n;
	list->next = *head;
	*head = list;

	return (list);
}