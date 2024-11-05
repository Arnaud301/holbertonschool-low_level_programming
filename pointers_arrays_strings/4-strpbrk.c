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
	while (*s)
	{
		char *a = accept;

		while (*a)
		{

			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
