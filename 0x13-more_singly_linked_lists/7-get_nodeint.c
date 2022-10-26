#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: the node
 * @index: index of the node starting at 0
 * Return: if node doesnt exist return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	for (x = 0; x < index; x++)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
	}
	return (head);
}
