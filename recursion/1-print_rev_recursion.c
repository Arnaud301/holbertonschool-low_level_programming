#include "main.h"
/**
 *
 *
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	
	if (s != '\0' && i == 0)
	{
		s++;
		if (s == '\0')
		{
			i++;
		}
		_print_rev_recurison(s);
	}
	if (s == '\0')
	{
		_putchar(s);
		s--;
		_print_rev_recursion(s);
	}
}
