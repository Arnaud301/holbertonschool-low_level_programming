#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 1; c < 100; c++)
	{
		if (c % 3 == 0 && c % 5 != 0)
		{
			printf("Fizz");
			printf(" ");
			continue;
		}
		else if (c % 5 == 0  && c % 3 != 0)
		{
			printf("Buzz");
			printf(" ");
			continue;
		}
		else if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
			continue;
		}
		printf("%d", c);
		printf(" ");
	}
	printf("Buzz");
	putchar('\n');
	return (0);
}
