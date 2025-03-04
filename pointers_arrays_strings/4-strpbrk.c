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
			i++;
			j = 0;
		}
		if (j == '\0')
		{
			a++;
			s++;
			j = 0;
		}
		j++;
	}
	return (s);
}			
