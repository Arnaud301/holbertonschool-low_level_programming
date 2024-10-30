#include "main.h"

/**
*print_triangle - prints triangle * size
*@size : idk
*Return: void
*/

void print_triangle(int size)
{

	int b;
	int a;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 1; a <= size; a++)
	{
		for (b = a; b < size; b++)
			_putchar(' ');
		for (; b <= a; b++)
			_putchar('#');
		_putchar('\n');
	}

}
