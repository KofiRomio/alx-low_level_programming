#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int tk;
	int bletters;
	int rwr;

	if (!filename)
		return (-1);

	tk = open(filename, O_WRONLY | O_APPEND);

	if (tk == -1)
		return (-1);

	if (text_content)
	{
		for (bletters = 0; text_content[bletters]; bletters++)
			;

		rwr = write(tk, text_content, bletters);

		if (rwr == -1)
			return (-1);
	}

	close(tk);

	return (1);
}
