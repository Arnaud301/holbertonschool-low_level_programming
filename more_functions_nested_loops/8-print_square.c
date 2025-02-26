#include "main.h"
/**
 *print_square - function
 *@size: int
 */
void print_square(int size)
{
	int a,int b;

	if (size == 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = 1; b < size; b++)
			_putchar('#');

		_putchar('#');
		_putchar('\n');
	}
}
