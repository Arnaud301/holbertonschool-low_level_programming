#include "main.h"
#include <stdio.h>

/**
 * _memset - idk
 * @s: idk
 * @b: idk
 * @n: idk
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		src = dest;
		if (src[i] != '\0')
			i++;
		else
			break;
	}

	return (dest);
}
