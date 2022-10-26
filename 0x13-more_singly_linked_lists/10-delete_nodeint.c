#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: the node
 * @index: the index to be deletes. it starts at 0
 * Return: 1 if success -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	{
		listint_t *curr_node;
		listint_t *next;

		unsigned int i;

		if (!head || !(*head))
		{
			return (-1);
		}
		curr_node = (*head);
		if (!index)
		{
			(*head) = curr_node->next;
			free(curr_node);
			return (1);
		}
		for (i = 0; curr_node && i < index - 1; i++)
		{
			curr_node = curr_node->next;
		}
		if (!curr_node || !(curr_node->next))
		{
			return (-1);
		}
		next = curr_node->next->next;
		free(curr_node->next);
		curr_node->next = next;
		return (1);
	}
}
