#include "main.h"
#include <stdio.h>

/**
 *_isupper - checks if uppercase and return if it is one.
 *@c: its the variable that is gonna be checked by isupper.
 * Return: Always 0.
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
