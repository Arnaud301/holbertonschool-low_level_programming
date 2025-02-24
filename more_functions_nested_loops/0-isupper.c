#include "main.h"
/**
 *_isupper - function
 *@c: int
 *Return: 0 on sucess else 1
 */
int _isupper(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
