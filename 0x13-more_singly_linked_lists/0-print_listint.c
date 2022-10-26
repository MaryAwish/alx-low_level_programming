#include "lists.h"

/**
 * print_listint - prints elements in a linked list
 * @h: the node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	unsigned int nodes = 0;

	p = h;
	while (p)
	{
		printf("%d\n", p->n);
		nodes++;
		p = p->next;
	}
	return (nodes);
}
