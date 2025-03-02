#include "main.h"
/**
 *puts_half - function
 *@str: string
 */
void puts_half(char *str)
{
	int count = 0, a = 0;

	while (str[count] != '\0')
		count++;

	a = (count / 2);

	if (count % 2 == 0)
	{
		while (a < count)
		{
			_putchar(str[a]);
			a++;
		}
	}

	else
	{
		a = a + 1;
		while (a < count)
		{
			_putchar(str[a]);
			a++;
		}
	}
	_putchar('\n');
}
