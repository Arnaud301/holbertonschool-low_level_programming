#include "lists.h"

/**
 *free_dlistint - free memorys used for a list
 *@head: pointer to list
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *tmp = head->next;

		free(head);

		head = tmp;
	}
}
