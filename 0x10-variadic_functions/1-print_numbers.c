#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by new line
 * @separator: string to be printed between numbers
 * @n: no. of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ls, int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(ls);
	putchar('\n');
}
