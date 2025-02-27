#include "main.h"
/**
 *swap_int - function
 *@a: int
 *@b: int
 */
void swap_int(int *a, int *b)
{
	int c = 0;
	int d = 0;

	c += *a;
	d += *b;

	*a = d;
	*b = c;
}
