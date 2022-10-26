#include "lists.h"

/**
 * sum_listint - returns sum of all data (n)
 * @head: the node
 * Return: if list is empty return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
