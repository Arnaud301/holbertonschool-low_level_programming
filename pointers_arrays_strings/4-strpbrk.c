#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
		while (s == accept)
		{
			if (s != accept)
			{
				continue;
			}
			s++;
			accept++;
		}
	if (s == NULL)
		return (s);
	return (s);
}
