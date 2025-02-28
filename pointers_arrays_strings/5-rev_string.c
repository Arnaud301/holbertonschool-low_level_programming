#include "main.h"
/**
 *
 *
 */
void rev_string(char *s)
{
	int i = 0;
	char string[] = "";

	while (s[i] != '\0')
		i++;
	while (s[i] > 0)
	{
		s[i] = string[i];
		i--;
	}
}
