#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - function
 *@width: int
 *@height: int
 *Return: 0
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int c = 0;
	int **array = malloc(height * sizeof(*array));

	if (array == NULL)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);

	for (; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			for (; c <= i; c++)
				free(array[c]);
			free(array);
			return (NULL);
		}
	}
	return (array);
}
