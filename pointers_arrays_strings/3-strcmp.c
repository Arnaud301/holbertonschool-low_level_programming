#include "main.h"
/**
 *@s1: string
 *@s2: string2
 *Return: the number of caracter found in each string
 *_strcmp - function
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;

	return (s1[i] - s2[i]);
}
