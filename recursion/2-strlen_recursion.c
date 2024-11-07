#include "main.h"

/**
 * _print_rev_recursion - function
 * @s: variable
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		s++;
		count++;
		_strlen_recursion(s);
	}
	return (count);
}
