#include "main.h"

/**
 * Description: print_alphabet - prints letters
 *
 * Return: 0 if successful
*/

void print_alphabet(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);

	_putchar('\n');
}
