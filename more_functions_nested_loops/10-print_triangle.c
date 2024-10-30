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

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
		_putchar(' ');
	}

}
