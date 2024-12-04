#include "lists.h"

/**
 * list_len - finds the len of the list
 * @h: the linked list
 *
 * Return: len
 */
size_t list_len(const list_h *h)
{
	size_t elements = 0;

	hile (h)
	{
		elements++;
		h = h ->next;
	}
	return (elements)
}
