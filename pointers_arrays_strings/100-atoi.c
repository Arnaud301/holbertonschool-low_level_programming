#include "main.h"
/**
 *_atoi - function
 *@s: string
 *Return: number from char
 */
int _atoi(char *s)
{
	int i = 0, a = 1;
	unsigned int res = 0;

	while ((s[i] >= 0 && s[i] <= 47) || (s[i] >= 58 && s[i] < 127))
	{
		if (s[i] == '-')
			a = (a * -1);
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	return (res * a);
}
