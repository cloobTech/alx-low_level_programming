#include <stdio.h>
#include "main.h"
#include "copy_file.c"

/**
 * main - main entry
 *
 * @argc: number of command line arguments
 * @argv: array containing command line arguments (string)
 *
 * Return: Always (0) succes
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_copy_file(argv[1], argv[2]);

	return (0);
}
