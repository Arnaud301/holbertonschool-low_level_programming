#include "main.h"
#include <stddef.h>
/**
 *_strlen - function
 *@s: int
 *Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	
	while (s[i] != '\0')
		i++;
	return (i);
}
