#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	int end = 0;
	int count = 1;

	if (s[end] != '\0')
	{
		end++;
		_print_rev_recursion(s);
	}
	if (end >= 0)
	{
		if (end == '\0')
		{
			end -= count;
		}
		_putchar(s[end]);
		end--;
		count++;
		_print_rev_recursion(s);
	}
	else
		_putchar('\n');
}
