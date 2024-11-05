#include "main.h"
#include <stdio.h>

/**
 *_strchr - idk
 *@c: idk
 *@s: idk
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == '\0')
		return (s);
	return (s);
}
