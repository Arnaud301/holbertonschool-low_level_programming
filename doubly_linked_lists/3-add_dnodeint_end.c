#include "lists.h"

/**
 *add_dnodeint_end - add a node at the end of a list
 *@head: pointer to the list head
 *@n: just like the task before number of node we add
 *Return: null if malloc fails else return the number of node n
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new_node;

	tmp = *head;

	if (head == NULL)
		return (NULL);

	while (tmp && tmp->next)
		tmp = tmp->next;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = NULL;

	if (tmp != NULL)
		tmp->next = new_node;

	if (*head == NULL)
		*head = new_node;

	return (new_node);
}
