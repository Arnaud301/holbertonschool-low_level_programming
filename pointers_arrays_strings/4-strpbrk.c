#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function
 * @s: string
 * @accept: bytes to find in string
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s)
	{
		if (*s == *a)
		{
			return (s);
		}
		a++;
	}
	return (NULL);
}
