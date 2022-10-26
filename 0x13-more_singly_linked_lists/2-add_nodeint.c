#include "lists.h"

/**
 * add_nodeint - adss a new node at the beginning of a list
 * @head: address of the first node of a list
 * @n: integer to inset into new node
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = *head;
	*head = p;
	return (*head);
}
