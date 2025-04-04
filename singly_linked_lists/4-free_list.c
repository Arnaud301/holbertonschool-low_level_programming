#include "lists.h"
/**
 *free_list - function that frees the memory used for a list
 *@head: the start of the list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;

		free(tmp->str);
		free(tmp);
	}
}
