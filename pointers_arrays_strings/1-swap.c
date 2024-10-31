#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values
 *@a: a integer value, soon ull be swapped little one.
 *@b: b integer value, soon ull be swapped little one.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
