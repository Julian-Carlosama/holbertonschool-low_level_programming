#include "main.h"

/**
 * create_file - Creates a file.
 *
 * @filename: file name of the main.
 *
 * @text_content: Content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 *
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, wr = 0;
	int fd = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (; text_content[i] != '\0'; i++)
		;

	wr = write(fd, text_content, i);

	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
