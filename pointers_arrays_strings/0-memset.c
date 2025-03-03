#include "main.h"
/**
 *_memset - function
 *@s: char
 *@b: char
 *@n: unsigned int
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		if (s[i] != '\0')
			i++;
		else
			break;
	}
	return (s);
}
