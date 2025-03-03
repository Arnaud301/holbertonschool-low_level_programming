#include "main.h"
/**
 *_strchr - function that find the corresponding caracter in a string
 *@s: the string
 *@c: the caracter
 *Return: when the caracter is found we return
 */
char *_strchr(char *s, char c)
{
	for (; *s != c; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (s == '\0')
		return (s);
	return (s);
}
