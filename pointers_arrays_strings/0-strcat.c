#include "main.h"
/**
 *_strcat - function
 *@dest: char
 *@src: char
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, a = 0;

	while (dest[i] != '\0')
		i++;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
