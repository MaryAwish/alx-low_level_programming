#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: the node
 * @index: the index to be deletes. it starts at 0
 * Return: 1 if success -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *new;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
		return (1);
	}
	current = *head;
	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	new = current->next;
	current->next = new->next;
	free(new);
	return (10);
}
