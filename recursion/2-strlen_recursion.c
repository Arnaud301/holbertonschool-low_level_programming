#include "main.h"
/**
 *_strlen_recursion - function
 *@s: char
 *Return: 0 if null else get the lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
