#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	
	if (!head)
		return;
	
	while (head)
	{
		free(head->n);
		free(head);
		temp = head->next;
		head = temp;
	}
}