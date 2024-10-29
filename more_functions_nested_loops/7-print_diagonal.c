#include "main.h"
#include <stdio.h>

/**
 *print_diagonals - print n number of lines.
 *@n: number of diagonals.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('\\');
			_putchar('\n');
			if (a == 1)
			{
				_putchar(' ');
			}
			n--;
			a = 1;
		}

		_putchar('\n');
	}
}
