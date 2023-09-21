#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in a linked list
 * @h: linked list head
 * Return: Always 0
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

