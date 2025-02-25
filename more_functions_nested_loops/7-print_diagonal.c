#include "main.h"
/**
 *
 *
 */
void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar(' ');
		if (a == n)
			_putchar("\"");
	}
	_putchar('\n');
}
