#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct prnt - checker struct
 * @t: type
 * @p: function to print
 */

typedef struct prnt
{
	char *t;
	void (*p)(va_list);
} prnt;

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_str(va_list);

#endif
