#include "main.h"

/**
 * _strncat - pretty much a function
 * @dest: nothing
 * @src: idk
 * @n: idk
 *
 * Return: the concatenate sentence
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
