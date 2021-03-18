#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	int i;

	if (!head)
		return (NULL);

	list = malloc(sizeof(list_t));

	if (!list)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	list->str = strdup(str);
	list->len = i;
	list->next = *head;
	*head = list;

	return (list);
}
