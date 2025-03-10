#include "main.h"
/**
 *_strncat - function
 *@dest: char
 *@src: char
 *@n: int
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, a = 0;

	while (dest[i] != '\0')
		i++;

	while (a < n && src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
