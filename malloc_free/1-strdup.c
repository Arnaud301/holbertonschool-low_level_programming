#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *_strdup - function
 *@str: string
 *Return: the newly allocated string wich is a copy of str
 */
char *_strdup(char *str)
{
	char *array;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	array = malloc(len + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		array[i] = str[i];

	return (array);
}
