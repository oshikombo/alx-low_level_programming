#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if
 *         1) there is one or more chars in the string b that is not 0 or 1.
 *         2) b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int last_idx = -1, first_idx = -1;
	int i = 0, base_pow = 1;
	unsigned int dec_num = 0;

	if (b == (void *)0)
		return (0);

	last_idx = is_bin(b, &first_idx);
	if (last_idx == -1)
		return (0);

	if ((last_idx - first_idx + 1) > (int)(sizeof(unsigned int) * 8))
		return (0);

	i = last_idx;
	while (i >= first_idx)
	{
		dec_num = dec_num + ((b[i] - '0') * base_pow);
		i--;
		base_pow = base_pow * 2;
	}

	return (dec_num);
}


/**
 * is_bin - checks a string for all of its chars to be either 0 or 1.
 * @b: pointer to a string of 0 and 1 chars.
 * @first: int pointer whose pointing value is to be set at the index
 *         of the first "1" found in b.
 *
 * Return: index of the last binary char in b, or -1 if a char different than
 *         0 or 1 is found.
 */

int is_bin(const char *b, int *first)
{
	int count = 0;

	*first = -1;
	while (*b != '\0')
	{
		if (*b < '0' || *b > '1')
			return (-1);

		if (*first == -1 && *b != '0')
			*first = count;

		b++;
		count++;
	}

	count--;
	return (count);
}

