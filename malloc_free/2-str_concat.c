#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *E2
 *_strlen - the strlen function rewrite
 *@str: the str we want to count the len
 *
 *Return: return
 */

int _strlen(char *str)
{
	int a = 0;

	while (str[a] != '\0')
		a++;
	return (a);
}

/**
 *str_concat - function
 *@s1: idk
 *@s2: idk
 *
 *Return: return
 */

char *str_concat(char *s1, char *s2)
{
	int len;
	char *mem, *temp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = _strlen(s1) + _strlen(s2);

	mem = malloc(len + 1);

	if (mem == NULL)
		return (NULL);

	temp = mem;

	while (*s1 != '\0')
	{
		*temp = *s1;
		temp++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*temp = *s2;
		temp++;
		s2++;
	}

	*temp = '\0';

	return (mem);
}