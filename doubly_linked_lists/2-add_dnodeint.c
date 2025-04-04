#include "lists.h"

/**
 *add_dnodeint - function that adds a new node at the beginning of a list
 *@head: pointer to the head
 *@n: the number of node we want to add
 *Return: will return null if malloc failed else it will return the number of nodes n
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;

	if (*head)
		(*head)->prev = tmp;

	*head = tmp;

	return (tmp);
}
