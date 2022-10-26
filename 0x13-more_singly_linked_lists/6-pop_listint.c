#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: the node
 * Return: 0 if link is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *t;
	int d;

	if (*head == NULL)
		return (0);

	t = *head;
	*head = t->next;
	d = t->n;
	free(t);
	return (d);
}
