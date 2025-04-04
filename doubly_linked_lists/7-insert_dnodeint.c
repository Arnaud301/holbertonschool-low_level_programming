#include "lists.h"

/**
 *insert_dnodeint_at_index - new node wil be created a n list
 *@h: pointer to list
 *@idx: where to insert the node
 *@n: the n node
 *Return: Null if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *newnode;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		tmp = tmp->next;
		if (!tmp)
			return (NULL);
		idx--;
	}

	if (!tmp->next)
		return (add_dnodeint_end(h, n));

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->prev = tmp;
	newnode->next = tmp->next;
	tmp->next->prev = newnode;
	tmp->next = newnode;

	return (newnode);
}
