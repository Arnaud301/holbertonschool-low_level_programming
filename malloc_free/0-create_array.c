#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (array);
	for (; i < size; i++)
		array[i] = c;
	return (array);
}
