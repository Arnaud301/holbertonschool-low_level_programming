#include "lists.h"
/**
 *list_len - function that calculates the lenght of a list
 *@h: the list
 *Return: the lenght
 */
size_t list_len(const list_t *h)
{
	int lenght = 0;

	while (h)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);
}
