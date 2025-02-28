#include "main.h"
/**
 *_strlen - function
 *@s: string
 *Return: lenght
 */
int _rev_string(char *s)
{
	int a = 0, b = 0, len = 0, c = 0;

	while (s[a] != '\0')
		a++;
	b = a - 1;
	while (len < a / 2)
	{
		c = s[len];
		s[len] = s[b];
		s[b] = c;
		len++;
		b--;
	}
}
