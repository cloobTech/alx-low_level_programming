#include "main.h"
#include "2-strlen.c"

/**
 * append_text_to_file -  appends text at the end of a file.
 *
 * @filename: name of the file
 * @text_content: NULL terminated string
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t size_w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	len = _strlen(text_content);
	size_w = write(fd, text_content, (size_t)(len));
	if (size_w < 0)
		return (-1);
	close(fd);
	return (1);
}
