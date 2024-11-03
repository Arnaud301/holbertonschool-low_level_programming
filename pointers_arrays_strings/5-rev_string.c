#include "main.h"

/**
 * rev_string - idk
 * @s: idk
 */

void rev_string(char *s)
{
	int length = 0, a = 0, b, temp = 0;

	while (s[length] != '\0')
		length++;

	b = length - 1;

	while (a < length / 2)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
		a++;
		b--;
	}
}
