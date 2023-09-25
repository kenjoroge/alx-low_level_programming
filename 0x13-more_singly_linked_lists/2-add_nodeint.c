#include "lists.h"

/**
 * add_nodeint - New node at the beggining
 * @head: struct
 * @n: integer
 *
 * Return: list_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}

