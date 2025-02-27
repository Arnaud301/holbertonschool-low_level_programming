#include "main.h"
#include "stdio.h"
/**
 *
 *
 *
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{	
		if (str[i] == '\0')
			continue;
		putchar(str[i]);
	}
	putchar('\n');
}
