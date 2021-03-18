#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
	list_t *list = NULL;

	if (!head)
		return (NULL);

	list = malloc(sizeof(list_t));

	if (!list)
		return (NULL);

	list->next = *head;
	list->str = strdup(str);
	list->len = strlen(str);
	*head = list;

	return (list);
}