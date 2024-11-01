#include "main.h"

/**
 *rev_string - idk
 *@s: idk
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int end = 0;

	while (s[end] != '\0')
	{
		end++;
	}
	end--;
	_putchar('\n');
	while (end >= 0)
	{
		end--;
	}
	_putchar('\n');
}
