#include "main.h"
/**
 *_strspn - function
 *@s: char
 *@accept: char
 *Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != accept[j])
	{
		i++;
		if (s[i] == accept[j])
		{
			j++;
			i = 0;
		}
	}
	return (i);
}
