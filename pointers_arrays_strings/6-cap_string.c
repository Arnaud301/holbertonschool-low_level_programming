#include "main.h"
/**
 *
 *
 *
 */
char *cap_string(char *str)
{
	int i = 0, a;
	char spe[13] = " ,;.!?\"(){}\t\n";

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		for (a = 0; a < 13; a++)
		{
			if (str[i] == spe[a] && str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
