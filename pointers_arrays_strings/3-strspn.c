#include "main.h"
#include <stdio.h>

/**
 * _strspn - idk
 * @s: idk
 * @accept: idk
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (s == accept)
	{
		if (s != accept)
		{
			return (count);
		}
		accept++;
		s++;
		count++;
	}
	return (count);
}
