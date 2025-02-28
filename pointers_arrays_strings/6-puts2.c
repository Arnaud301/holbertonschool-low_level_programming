#include "main.h"
/**
 *
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i + 2] == NULL)
		{
			i++;
			continue;
		}
		_putchar(str[i]);
		i += 2;
	}
}
