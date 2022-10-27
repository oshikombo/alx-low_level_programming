#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number whos given index bit is being set to 0.
 * @index: index of the bit to be set to 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	mask = mask << index;
	mask = ~mask;

	*n = *n & mask;

	return (1);
}

