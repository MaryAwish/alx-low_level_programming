#include "lists.h"

/**
 * freelist - frees linkedlist
 * @head: heead of a list
 *
 * Return: void
 */

void freelist(listp_t **head)
{
	listp_t *tmnp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tmnp = curr) != NULL)
		{
			curr = curr->next;
			free(tmnp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	listp_t *ptr, *new, *add;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				freelist(&ptr);
				return (num);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num++;
	}
	freelist(&ptr);
	return (num);
}
