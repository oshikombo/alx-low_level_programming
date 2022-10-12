#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: name to be printed
 * @f: function pointer to the function where name is printed
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}

