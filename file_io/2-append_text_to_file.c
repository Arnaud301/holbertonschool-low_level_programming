#include "main.h"

/**
 *append_text_to_file - will add text and the end of a file
 *@filename: pointer of the file
 *@text_content: the content
 *Return: if fail return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_o, numl = 0, write_b;

	if (filename == NULL)
		return (-1);

	f_o = open(filename, O_WRONLY | O_APPEND);

	if (f_o == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[numl])
			numl++;

		write_b = write(f_o, text_content, numl);

		if (write_b == -1 || write_b != numl)
		{
			close(f_o);
			return (-1);
		}
	}

	close(f_o);
	return (1);
}
