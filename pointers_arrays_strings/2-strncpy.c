#include "main.h"

/**
 * _strcmp - .
 * @s1: IM STILL STANDING
 * @s2: after all this time
 *
 * Return: im still standing
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;

	return (s1[i] - s2[i]);
}
