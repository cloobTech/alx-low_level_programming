#include <stdio.h>


int main(int __attribute__((__unused__))argc, char **argv)
{
	int i;

	i = 1;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);

}
