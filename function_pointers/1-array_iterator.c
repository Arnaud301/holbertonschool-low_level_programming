#include "function_pointers.h"
/**
 * array_iterator - the function
 *@array: array pointer of the function
 *@size: size of the function
 *@action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if ((array) && (size) && (action))

		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
