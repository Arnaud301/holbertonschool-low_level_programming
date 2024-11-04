#include "main.h"
#include <stdio.h>

/**
 * _memset - idk
 * @s: idk
 * @b: idk
 * @n: idk
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (n > 0; n--)
	{
		*s[i] = b[i];
		i++;
	}
	return (*s)
}
