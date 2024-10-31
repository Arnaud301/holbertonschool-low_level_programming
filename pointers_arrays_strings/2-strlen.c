#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (s);
}
