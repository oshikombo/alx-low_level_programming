#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function.
 * @argc: number of arguments received.
 * @argv: array of arguments received.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int n_bytes = 0;
	int i;
	void *magic_ptr = NULL;
	char *final_ptr = NULL;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	magic_ptr = main;
	final_ptr = magic_ptr;

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x", final_ptr[i] & 0xFF);
		if (i < n_bytes - 1)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}

