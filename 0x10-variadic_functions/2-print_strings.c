#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: no. of strings to be passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *c;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char *);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(list);

	putchar('\n');
}
