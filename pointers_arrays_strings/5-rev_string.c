#include "main.h"
/**
 *
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int i2 = 0;
	char string[] = "";

	while (s[i] != '\0')
		i++;
	while (s[i] > 0)
	{
		s[i] = string[i2];
		i--;
		i2++;
	}
}
