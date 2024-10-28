#include "main.h"
#include <stdio.h>

/**
 *_isdigit - checks if its a digit and return 1 if it is one.
 *@c: its the variable that is gonna be checked by isdigit.
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
