#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c == 113 || c == 101)
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
