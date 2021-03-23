#include "lists.h"
/**
 * sum_listint - return the sum of all data in a list
 * @head: pointer to list
 * Return: sum of data, 0 otherwise
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
