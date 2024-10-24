#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c = 123;

	while (c > 97)
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
