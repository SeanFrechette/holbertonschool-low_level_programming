#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: Address to list
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (!head)
		return;
	while (head)
	{
		free(head->str);
		free(head);
		temp = head->next;
		head = temp;
	}
}
