#include "main.h"
/**
 *
 *
 */
void rev_string(char *s)
{
	int a = _strlen(s);

	while (a > 0)
	{
		*s = s[a];
		a--;
	}
}
