#include "lists.h"

/**
 * sum_listint - sums all dat
 *
 * @head: head
 *
 * Return: always 0
 */

int sum_listint(listint_t *head)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}

