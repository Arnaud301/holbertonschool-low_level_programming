#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function
 * @s: string
 * @accept: bytes to find in string
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *n = needle;

		while (*n)
		{

			if (*haystack == *n)
			{
				return (haystack);
			}
			n++;
		}
		haystack++;
	}
	return (NULL);
}
