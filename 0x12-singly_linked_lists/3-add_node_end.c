#include "lists.h"

/**
 * add_node_end - adds node at the end of a linked list
 * @head: head pointer
 * @str: input string
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dp;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dp = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dp;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
