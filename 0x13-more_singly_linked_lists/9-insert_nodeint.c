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
	listint_t *new, *tmp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
