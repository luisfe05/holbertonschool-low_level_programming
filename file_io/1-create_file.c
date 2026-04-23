#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file with given content
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t w;

	/* Return -1 if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open file - create if not exists, truncate if exists, rw------- */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL create empty file */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Find length of text_content */
	len = 0;
	while (text_content[len])
		len++;

	/* Write content to the file */
	w = write(fd, text_content, len);
	close(fd);

	if (w != len)
		return (-1);

	return (1);
}
