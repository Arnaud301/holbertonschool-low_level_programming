#include "lists.h"
/**
 *add_node - function that adds a node
 *@head: the start of the nod
 *@Return: result
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	char *dup;

	list_t *result = malloc(sizeof(list_t));

	if (!result)
		return (NULL);

	dup = strdup(str);

	if (!dup)
	{
		free(result);
		return (NULL);
	}

	while (str[len])
		len++;

	result->str = dup;
	result->len = len;
	result->next = *head;

	*head = result;

	return (result);
}
