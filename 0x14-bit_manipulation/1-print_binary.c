#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number to be represented as binary.
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int res = n;

	while ((res >> 1) > 0)
	{
		count++;
		res = res >> 1;
	}

	res = n;
	while (count > 0)
		_putchar(((res >> count--) & 1) + '0');
	_putchar((res & 1) + '0');
}

