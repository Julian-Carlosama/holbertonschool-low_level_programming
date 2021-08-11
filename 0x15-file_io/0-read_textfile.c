#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 *
 * @filename: File name of main.
 *
 * @letters: Numbers of characters shows.
 *
 * Return: Actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t red, wri;
	int fd;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	red = read(fd, buffer, letters);
	close(fd);

	if (red == -1)
	{
		close(fd);
	}
	wri = write(STDOUT_FILENO, buffer, red);
	free(buffer);
	close(fd);

	if (red == wri)
	{
		return (wri);
	}
	return (wri);
}
