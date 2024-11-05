#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
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
	return(count);
}
