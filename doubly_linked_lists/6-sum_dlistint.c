#include "lists.h"

/**
 *sum_dlistint - add all the nodes
 *@head: pointeR to the list
 *Return: the sum of n nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
