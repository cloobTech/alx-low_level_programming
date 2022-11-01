#include "main.h"
#include "2-strlen.c"

/**
 * create_file - Create a function that creates a file.
 *
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created, file
 * can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t size_w, size_len;

	if (filename == NULL)
		return (-1);
	len = _strlen(text_content);
	size_len = len;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	size_w = write(fd, text_content, len);
	if (size_w < 0 || size_w < size_len)
		return (-1);
	return (1);

}
