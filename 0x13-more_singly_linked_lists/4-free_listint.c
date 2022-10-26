#include "lists.h"

/**
 * free_listint - frees the list
 * @head: address of first node of the list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp, *temp;

	tmp = head;

	while (tmp != NULL)
	{
		temp = tmp->next;
		free(tmp);
		tmp = temp;
	}
}
