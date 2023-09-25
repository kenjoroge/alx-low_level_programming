#include "lists.h"

/**
 * pop_listint - remove node from top
 * @head: head
 *
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *new_node = *head;

	if (new_node)
	{
		i = new_node->n;
		*head = new_node->next;
	}
	free(new_node);
	return (i);
}

