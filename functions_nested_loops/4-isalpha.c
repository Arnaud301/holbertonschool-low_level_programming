#include "main.h"
/**
 *_isalpha - function
 *@c: int
 *Return: 0 on sucess else 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
