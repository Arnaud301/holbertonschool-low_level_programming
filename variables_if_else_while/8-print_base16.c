#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 48;

	while (c < 58)
	{
		putchar(c);
		c++;
	}

	c = 97;
	while (c < 103)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
