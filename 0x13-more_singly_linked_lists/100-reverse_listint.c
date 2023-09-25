#include "lists.h"

/**
 * reverse_listint - Reverses linked list
 * @head: head
 * Return: true value of listint_t
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *existing = *head;
	listint_t *next_node = NULL;

	if (head == NULL)
	{
		return (NULL);
	}

	existing = *head;
	*head = NULL;

	while (existing != NULL)
	{
		next_node = existing->next;

		existing->next = *head;
		existing = next_node;
	}
	return (*head);
}

