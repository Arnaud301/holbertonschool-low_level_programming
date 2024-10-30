#include "main.h"
#include <stdio.h>

/**
 *print_square - prints size
 *@size: size of the cube
 * Return: Always 0.
 */
void print_square(int size)
{
	int n = 0 + size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n != 0)
		{
			while (size > 0)
			{
				_putchar('#');
				size--;
			}
			_putchar('\n');
			n--;
		}

		_putchar('\n');
	}
}
