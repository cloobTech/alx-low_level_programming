#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it.
 *
 * @argc: number of array argument
 * @argv: list of array arguement
 *
 * Return: number @argc value
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}

	printf("%d\n", i - 1);

	return (0);
}
