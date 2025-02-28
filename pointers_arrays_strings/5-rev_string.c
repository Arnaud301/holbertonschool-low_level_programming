#include "main.h"
/**
 *
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int a = _strlen(s);

	while (a > 0)
	{
		*s = s[a];
		a--;
	}
}
