#include "main.h"
#include "stdio.h"
/**
 *
 *
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{	
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
	}
	_putchar('\n');
}
