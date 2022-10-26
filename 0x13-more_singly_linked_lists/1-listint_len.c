#include "lists.h"

/**
 * listint_len - prints number of elements in a linked list
 * @h: node
 * Return: success
 */

size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
