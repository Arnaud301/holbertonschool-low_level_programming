#include "main.h"
/**
 *_isdigit - function
 *@c: int
 *Return: 1 when value is beetween 0 and 9 else return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
