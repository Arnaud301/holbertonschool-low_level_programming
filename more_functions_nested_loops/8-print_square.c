#include "main.h"
#include <stdio.h>

/**
 *print_square - prints size
 *@size: size of the cube
 * Return: Always 0.
 */
void print_square(int size)
{
	int n = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n < size)
		{
			while (size > 0)
			{
				_putchar('#');
				size--;
			}
			_putchar('\n');
		}

		_putchar('\n');
	}
}
