#include "lists.h"
/**
 *print_list - functions that prints the element of a list if theres one
 *@h: the list
 *Return: the last node we were in as an exemple in the fourth so we return 3
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		node++;
		h = h->next;

	}

	return (node);
}
