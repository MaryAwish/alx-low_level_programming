#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: head node
 * @n: number od finput nodes
 * Return: address of the new elemet
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next)
		current = current->next;
	current->next = new;
	return (new);
}
