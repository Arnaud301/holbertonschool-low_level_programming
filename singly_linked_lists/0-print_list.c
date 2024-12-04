#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements in a list.
 * @h: The current list to print.
 *
 * Return: len
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
