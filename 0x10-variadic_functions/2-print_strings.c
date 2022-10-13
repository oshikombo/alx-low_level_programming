#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings with a separator between strings.
 * @separator: string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sep = 1;
	char *a;

	if (separator == NULL)
		sep = 0;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(valist, char *);
		if (a == NULL)
			printf("(nil)");
		else
			printf("%s", a);

		if (i < n - 1 && sep != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}

