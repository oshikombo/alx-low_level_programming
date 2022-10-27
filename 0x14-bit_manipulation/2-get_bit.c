#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index.
 * @n: number from which bits are going to be obtained.
 * @index: index of the bit to look for starting at 0.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	while (count < index)
	{
		n = n >> 1;
		count++;
	}

	if (count == index)
		return (n & 1);

	return (-1);
}

