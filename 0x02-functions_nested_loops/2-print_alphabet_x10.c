#include "main.h"

/**
 * Description: print_alphabet_x10(void) - prints alphabets 10 times
 *
 * Return: 0 if successful
*/

void print_alphabet_x10(void)
{
	int b;
	char bx = 'a';

	for (b = 0; b <= 9; b++)
	{
		for (bx = 'a'; bx <= 'z'; bx++)
		{
			_putchar(bx);
		}
		_putchar('\n');
	}
}
