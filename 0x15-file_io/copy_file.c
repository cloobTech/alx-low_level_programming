#include "main.h"
#include "2-strlen.c"

/**
 * _copy_file - Copy the content of one file to another.
 *
 * @file: File Source
 * @file_two: File destination
 *
 * Return: (0) on success else exit function.
 */

int _copy_file(const char *file, char *file_two)
{
	int fd, fd1;
	ssize_t size_r, size_w;
	char *buffer;

	if (file == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	fd = open(file, O_RDONLY);
	fd1 = open(file_two, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 00664);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_two);
		exit(99);
	}
	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		exit(98);
	}
	size_r = read(fd, buffer, 1024);
	size_w = write(fd1, buffer, size_r);
	if (size_w < 0 || size_w < size_r)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_two);
		free(buffer);
		exit(99);
	}
	if (size_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	while (size_r != 0)
	{
		size_r = read(fd, buffer, 1024);
		size_w = write(fd1, buffer, size_r);
		if (size_w < 0 || size_w < size_r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_two);
			free(buffer);
			exit(99);
		}
		if (size_r < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
			free(buffer);
			exit(98);
		}
	}
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	close(fd);
	free(buffer);
	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	close(fd1);
	return (0);
}

