#include "lists.h"

/**
 * get_nodeint_at_index - node
 * @head: head
 * @index: int
 *
 * Return: Always 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
	{
		return (NULL);
	}
	j = 0;

	while (head != NULL)
	{
		if (index == j)
		{
			return (head);
		}
		j++;
		head = head->next;
	}
	return (NULL);
}
