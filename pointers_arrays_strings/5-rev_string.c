#include "main.h"
/**
 *_strlen - function
 *@s: string
 *Return: lenght
 */
int _strlen(char *s)
{
        int i = 0;

        if (s[i] == '\0')
                return (0);
        while (s[i] != '\0')
                i++;
        return (i);
}
/**
 *rev_string - function 2
 *@s: string
 */
void rev_string(char *s)
{
	int a = _strlen(s);

	while (a > 0)
	{
		*s = s[a];
		a--;
	}
}
