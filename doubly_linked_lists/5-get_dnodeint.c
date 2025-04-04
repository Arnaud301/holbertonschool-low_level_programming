#include "lists.h"

/**
 *get_dnodeint_at_index - function that finds a node and returns it when found
 *@head: pointer to the list
 *@index: the node we want to find
 *Return: null if theres no list else return the node wanted
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (index != 0 && head)
	{
		head = head->next;
		index--;
	}

	return (head);
}
