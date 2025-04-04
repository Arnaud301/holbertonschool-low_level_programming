#include "main.h"

/**
 *create_file - create a file
 *@filename: the name of the file
 *@text_content: the file content
 *Return: -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int f_o, numl = 0, write_b;

	if (!filename)
		return (-1);

	f_o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f_o == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[numl])
			numl++;

		write_b = write(f_o, text_content, numl);

		if (write_b == -1)
		{
			close(f_o);
			return (-1);
		}
	}

	close(f_o);
	return (1);
}
