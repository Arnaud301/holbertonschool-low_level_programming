#include "main.h"
#include <stdio.h>

/**
 * _memcpy - idk
 * @src: idk
 * @dest: idk
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

