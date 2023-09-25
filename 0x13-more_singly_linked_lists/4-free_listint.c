#include "lists.h"

/**
 * free_listint - free
 * @head: head
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
}

