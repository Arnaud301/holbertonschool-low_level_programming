#include "main.h"

/**
 *print_rev - idk
 *@s: idk
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int end = 0;

	while (s[end] != '\0')
	{
		end++;
	}
	end--;
	while (end >= 0)
	{
		_putchar(*s);
		end--;
	}
	_putchar('\n');
}
