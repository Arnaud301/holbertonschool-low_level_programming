#include "main.h"
#include <stdio.h>

/**
 *print_numbers - print numbers
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			{
				_putchar('0' + b / 10);
			}
			_putchar('0' + b % 10);
		}
		_putchar('\n');
	}
}
