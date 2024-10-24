#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int numba = 0;

	while (numba < 10)
	{
		putchar(numba);
		putchar(',');
		putchar(' ');
		numba++;
	}
	putchar('\n');

	return (0);
}
