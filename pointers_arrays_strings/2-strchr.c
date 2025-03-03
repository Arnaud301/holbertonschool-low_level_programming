#include "main.h"
/**
 *
 *
 *
 */
char *_strchr(char *s, char c)
{
	for (; *s != c; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
		return (s);
	return (s);
}
