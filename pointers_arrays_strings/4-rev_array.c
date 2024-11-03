#include "main.h"

/**
 * reverse_array - idk
 * @a: idk
 * @n: isk
 */

void reverse_array(int *a, int n)
{
	int temp = 0, i;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
