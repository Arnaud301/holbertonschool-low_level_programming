#include "main.h"
#include <stddef.h>
/**
 *
 *
 *
 */
int _strlen(char *s)
{
	int i = 0;

	if (*s[i] == NULL)
		return (0);
	else
	{
		while (*s[i] != NULL)
			i++;
	}
	return (i);
}
