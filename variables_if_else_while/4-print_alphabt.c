#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 97;

	while (c < 123)
	{
		if (c == 113 || c == 101)
		{
			continue;
		}
		putchar(c);
		c++;
	}
	return (0);
}
