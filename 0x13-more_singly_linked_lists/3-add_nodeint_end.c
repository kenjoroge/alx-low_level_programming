#include "lists.h"

/**
 * add_nodeint_end - New new_node at the end
 * @head: struct
 * @n: integer
 *
 * Return: Always as requested
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL, *end_node = NULL;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
		return (*head);
	}
	end_node = *head;

	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}
	end_node->next = node;
	node->next = NULL;

	return (*head);
}

