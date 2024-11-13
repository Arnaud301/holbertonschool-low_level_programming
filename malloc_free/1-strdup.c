#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - function 
 *@str: string
 *Return: pointer to the array
 */

char *_strdup(char *str)
{
	char *array;
	int len = 0;
	int i = 0;

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
