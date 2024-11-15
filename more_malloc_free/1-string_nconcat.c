#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - function
 *@s1: string1
 *@s2: string2
 *@n: unsigned int
 *Return : pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0' && j < n)
		j++;

	concat = malloc(i + j + 1);

	if (concat == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		concat[k] = s1[k];

	for (k = 0; k < j; k++)
		concat[i + k] = s2[k];

	concat[i + j] = '\0';

	return (concat);
}
