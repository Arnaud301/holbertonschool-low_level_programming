#include "main.h"
/**
 *_str_str - function
 *@haystack: char
 *@needle: char
 *Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *j;

	j = needle;

	if (*j == 0)
		return ((char *) haystack);

	for ( ; *haystack != 0; haystack++)
	{
		if (*haystack != *j)
			continue;

		i = haystack;
		while (1)
		{
			if (*j == 0)
			{
				return ((char *) haystack);
			}
			if (*i++ != *j++)
			{
				break;
			}
		}
		j = needle;
	}
	return ('\0');
}
