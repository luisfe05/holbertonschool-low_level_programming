#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r;
	ssize_t w;

	/* Return 0 if filename is NULL */
	if (filename == NULL)
		return (0);

	/* Open the file for reading */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocate buffer to hold the bytes */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	/* Read letters bytes from the file */
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/* Write the bytes to stdout */
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);

	/* Return 0 if write failed or wrote wrong amount */
	if (w != r)
		return (0);

	return (w);
}
