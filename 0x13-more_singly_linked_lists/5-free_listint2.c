#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: address of the first node of a list
 *
 * Description: the function sets the head to NULL
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		tmp = current;
		current = tmp->next;
		free(tmp);
	}
	*head = NULL;
	head = NULL;
}
