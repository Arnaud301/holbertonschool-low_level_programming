#include "main.h"
#include <stdio.h>

/**
 *print_numbers - print numbers
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
