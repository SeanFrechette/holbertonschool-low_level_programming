#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: Address to list
 */
void free_listint2(listint_t **head)
{
	listint_t *list = NULL;

	if (head)
	{
		while (*head)
		{
			list = *head;
			*head = (*head)->next;
			free(list);
		}
		*head = NULL;
	}
}
