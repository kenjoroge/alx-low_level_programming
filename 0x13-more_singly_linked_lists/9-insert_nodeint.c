#include "lists.h"


/**
 * insert_nodeint_at_index - Adds node
 * @head: head
 * @idx: index
 * @n: struct int
 *
 * Return: listin_
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *existing_node, *new_node = malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	existing_node = *head;

	while (existing_node)
	{
		if (i == (idx - 1))
		{
			new_node->next = existing_node->next;
			existing_node->next = new_node;
			return (new_node);
		}
		i++;
		existing_node = existing_node->next;
	}
	free(new_node);

	return (NULL);
}

