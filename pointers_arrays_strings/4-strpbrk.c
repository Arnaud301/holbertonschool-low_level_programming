#include "main.h"
/**
 *
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, a = 0;

	while (s[i] != accept[j])
	{
		if (s[i] == accept[j])
		{
			s++;
			j = 0;
		}
		else
		{
			a++;
			s++;
			j = 0;
		}
		j++;
	}
	return (accept + s - a);
}			
