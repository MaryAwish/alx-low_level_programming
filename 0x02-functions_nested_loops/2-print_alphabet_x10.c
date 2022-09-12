#include "main.h"

/**
 * print_alphabet_x10 - prints lwtters x 10
 *
 * Returns: Always 0
*/

void print_alphabet_x10(void)
{
	int x;
	char y = 'a';

	for (x = 0; x <= 9; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
