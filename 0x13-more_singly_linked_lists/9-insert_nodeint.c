#include "lists.h"

/**
 * insert_nodeint_at_index - insets new node at given position
 * @head: the node
 * @idx: index of the list where the node should be added
 * index starts at 0
 * @n: the integer
 * Return:  retruns address of the new node or NULL if it fails
 * if its not possible to add a new node at idx return Null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		new = *head;
		for (; i < idx - 1 && new != NULL; i++)
			new = new->next;
		if (new == NULL)
			return (NULL);
	}
	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	if (idx == 0)
	{
		current->next = *head;
		*head = current;
		return (current);
	}
	current->next = new->next;
	new->next = current;
	return (new);
}
