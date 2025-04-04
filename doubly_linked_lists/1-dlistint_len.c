#include "lists.h"

/**
 *dlistint_len - return the lenght of a list
 *@h: pointer to the list
 *Return: node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
