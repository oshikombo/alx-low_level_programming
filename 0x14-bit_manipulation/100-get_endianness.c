#include "main.h"

/**
 * get_endianness - checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int x = 1;
	char *ptr = (char *)&x;

	if (*ptr == 1)
		return (1);

	return (0);
}

