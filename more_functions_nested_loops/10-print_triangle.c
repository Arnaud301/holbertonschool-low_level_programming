#include "main.h"

/**
*print_triangle - prints triangle * size
*@size : idk
*Return: void
*/

void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < a; b++)
			_putchar('#');

			_putchar('\n');

			if (a == (size - 1))
				continue;
			_putchar(' ');
		}
	}
	_putchar('\n');
}
