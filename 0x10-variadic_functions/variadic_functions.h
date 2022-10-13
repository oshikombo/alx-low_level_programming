#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
/**
 * struct form_t - Struct form_t
 *
 * @c: data type
 * @f: The function associated
 */

typedef struct form_t
{
	char *c;
	void (*f)(va_list *);
} my_form;

int _putchar(char);
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const format, ...);
void print_achar(va_list *);
void print_anint(va_list *);
void print_afloat(va_list *);
void print_achar_arr(va_list *);

#endif

