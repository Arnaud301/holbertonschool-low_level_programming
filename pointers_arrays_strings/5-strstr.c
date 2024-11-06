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
	int i = 0;
	int j = 0;

	while (haystack[i] != 0)
	{
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
