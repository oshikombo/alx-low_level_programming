#include "main.h"

/**
 * flip_bits - finds the number of bits needed to flip to get
 *             from one number to another.
 *
 * @n: first number to compare bitwise with m.
 * @m: second number to compare bitwise with n.
 *
 * Return: the number of bits needed to flip to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n > 0 || m > 0)
	{
		if (((n & 1) ^ (m & 1)) == 1)
			count++;
		n = n >> 1;
		m = m >> 1;
	}

	return (count);
}
 
