#include "lists.h"
/**
 * add_node_end - adds a node at the end of list
 * @head: Address to node
 * @str: String input
 * Return: Address to new element, otherwise NULL 
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list;
	list_t *temp = *head;
	int len;

	if (!head)
		return (NULL);

	list = malloc(sizeof(list_t));
	if (!list)
		return (NULL);

	list->next = NULL;
	for (len = 0; str[len]; len++)
		;
	list->str = strdup(str);
	list->len = len;

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
