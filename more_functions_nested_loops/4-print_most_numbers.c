#include "main.h"
/**
 *print_most_numbers - function
 *Return: 0 on sucess
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if ((a == 50) | (a == 52))
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
