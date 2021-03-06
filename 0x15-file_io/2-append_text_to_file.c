#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: Is the name of the file.
 *
 * @text_content: Is the NULL terminated string to add at the end of the file.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		wr = write(fd, text_content, i);

		if (wr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
