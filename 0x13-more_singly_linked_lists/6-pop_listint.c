#include "lists.h"
/**
 * pop_listint - delete the head node of a list
 * @head: address to list
 * Return: head nodes data, 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int num;

	if (!(*head))
		return (0);

	num = (*head)->n;
	list = (*head)->next;
	free(*head);
	*head = list;

	return (num);
}