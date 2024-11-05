#include "main.h"
#include <stdio.h>

/**
 * _strstr - function
 * @haystack: string
 * @needle: bytes to find in string
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
				return (n);
			}
			else if (*haystack == '\0')
				return (NULL);
			haystack++;
		}
	}
	return (NULL);
}
