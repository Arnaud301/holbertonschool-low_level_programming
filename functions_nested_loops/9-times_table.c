#include "main.h"
/**
 *
 */
void times_table(void)
{
	int a, b, c;
	int tens, units;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = (a * b);
			tens = c / 10;
			units = c % 10;

			if (c >= 10)
				_putchar(tens + '0');
			else if (b > 0)
				_putchar(' ');

			_putchar(units + '0');

			if (b < 9)
			{
				_putchar (',');
				_putchar(' ');
			}

		}
		_putchar ('\n');
	}
}
