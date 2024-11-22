#include "function_pointers.h"
#include <stddef.h>
/**
 *int_index - function
 *@array: array
 *@size: the size of array
 *@cmp: pointer
 *Return: return
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	while (i < size)
	{
		i++;

		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
