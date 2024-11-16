#include "main.h"
#include <stdlib.h>

/**
 *array_range - function 
 *@min: int
 *@max: int
 *Return: IDK
 */

int *array_range(int min, int max)
{
	int *array, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
