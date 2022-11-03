#include "main.h"
#include "2-strlen.c"

/**
 * _read_file - read the content of a file into buffer.
 *
 * @file: Parameter to be evaluated
 *
 * Return: Nothing
 */

char *_read_file(const char *file)
{
	int fd;
	ssize_t size_r;
	char *buffer;

	if (file == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
		exit(98);
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	size_r = read(fd, buffer, 1024);
	size_r = (ssize_t) _strlen(buffer);
	if (size_r < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	if (close(fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	close(fd);
	return (buffer);
}

/**
 * copy_file - copy file content to another file
 *
 * @filename_one: file source
 * @filename_two: file destination
 *
 * Return: 1 on success else -1;
 */

int copy_file(const char *filename_one, char *filename_two)
{
	int fd1;
	ssize_t  size_w, size_r;
	char *buffer;

	/* calling the read func */
	buffer = _read_file(filename_one);
	size_r = (ssize_t)_strlen(buffer);
	fd1 = open(filename_two, O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (fd1 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", filename_two);
		exit(99);
	}
	size_w = write(fd1, buffer, size_r);
	if (size_w < 0 || size_w < size_r)
	{
		dprintf(2, "Error: Can't write to %s\n", filename_two);
		exit(99);
	}
	free(buffer);
	if (close(fd1) < 0)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	close(fd1);
		return (1);
}
