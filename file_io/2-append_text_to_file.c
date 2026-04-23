#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t w;

	/* Return -1 if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open file for appending - do not create if not exists */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL return 1 since file exists */
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
