#include "lists.h"

/**
 * listint_len - Number of elements
 * @h: header
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

