#include "main.h"

/**
 * puts2 - idk
 * @str: idk
 */

void puts2(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (count % 2 == 0)
			_putchar(*str);
		count++;
		str++;
	}
	_putchar('\n');
}
