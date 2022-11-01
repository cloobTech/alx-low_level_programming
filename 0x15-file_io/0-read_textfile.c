#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file to be read from
 * @letters: no of bytes to read
 *
 * Return: number of bytes read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t size_r, size_w, len;
	void *buffer;
	const void *buf;

	if (filename == NULL)
		return (0);
	len = letters;
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	size_r = read(fd, buffer, letters);
	if (size_r < 0)
		return (0);
	buf = buffer;
	size_w = write(1, buf, letters);
	free(buffer);
	free(buf);
	if (size_w < 0 || size_w < len)
		return (0);
	return (size_r);
}
