#include "main.h"
/**
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (needle[i] == '\0')
		return (haystack);

	while (haystack[i] != needle[j])
	{
		if (haystack[i] == needle[j])
		{
			j++;
		}
		i++;
	}
	return (haystack + j);
}
