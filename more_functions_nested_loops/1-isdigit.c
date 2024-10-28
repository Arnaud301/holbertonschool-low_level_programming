#include "main.h"
#include <stdio.h>

/**
 *_isdigit - checks if its a digit and return 1 if it is one.
 *@c: its the variable that is gonna be checked by isdigit.
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
