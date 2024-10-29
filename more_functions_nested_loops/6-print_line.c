#include "main.h"
#include <stdio.h>

/**
 *print_line - print n number of lines.
 *@n: number of lines.
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('_' * n);
		_putchar('\n');
	}
}
