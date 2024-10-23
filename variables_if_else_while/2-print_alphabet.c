#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c = 97;

	while (c < 123)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
