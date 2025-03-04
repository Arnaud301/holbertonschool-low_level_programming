#include "main.h"
/**
 *_strpbrk - function
 *@s: char
 *@accept: char
 *Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int a, i = 0;

	while (s[i] != '\0')
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
				return ((char *)(s + i));
		}
		i++;
	}
	return ('\0');
}
