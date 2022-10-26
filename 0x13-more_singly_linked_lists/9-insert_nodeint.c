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
	listint_t *current;
	listint_t *new_node;

	register uint i;

	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		i++;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
