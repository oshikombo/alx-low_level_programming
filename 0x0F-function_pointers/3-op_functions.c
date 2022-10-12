#include "3-calc.h"

/**
 * op_add - function that sums two int values
 * @a: first operant
 * @b: second operant
 *
 * Return: result of the sum of "a + b"
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that substracts two int values
 * @a: first operant
 * @b: second operant
 *
 * Return: result of the substraction of "a - b"
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two int values
 * @a: first operant
 * @b: second operant
 *
 * Return: result of the multiplication of "a * b"
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two int values
 * @a: first operant
 * @b: second operant
 *
 * Return: result of the division of "a / b", if b is 0 exits with status 100
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - function that gets a module of b
 * @a: first operant
 * @b: second operant
 *
 * Return: result of "a % b", if b is 0 exits with status 100
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

