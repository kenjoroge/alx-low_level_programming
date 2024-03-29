#include "lists.h"

/**
 * free_listint2 - function description
 * @head: head
 *
 * Return: Always 0
 */

void free_listint2(listint_t **head)
{
	listint_t *new_node1 = NULL, *new_node2 = NULL;

	if (head == NULL)
	{
		return;
	}
	new_node1 = *head;

	while (new_node1 != NULL)
	{
		new_node2 = new_node1;
		new_node1 = new_node1->next;
		free(new_node2);
	}
	*head = NULL;
}

