#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_realloc(void *, unsigned int, unsigned int);

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *p;
	unsigned int i;
	unsigned int new_size;

	new_size = 20;
	p = malloc(sizeof(char) * 30);
	p = _realloc(NULL, sizeof(char) * 30, sizeof(char) * new_size);
	if (p == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	i = 0;
	while (i < new_size)
	{
		p[i++] = 98;
	}
	simple_print_buffer(p, new_size);
	free(p);
	return (0);
}
