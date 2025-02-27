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

	if (s[i] == '\0')
		return (0);
	else
	{
		while (s[i] != '\0')
			i++;
	}
	return (i);
}
