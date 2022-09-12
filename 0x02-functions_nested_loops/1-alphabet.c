#include "main.h"

/**
 * Description: main - prints alphabets
 *
 * Return: 0 when successful
*/

int main(void)
{
	char al = 'a';

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}

	_putchar('\n');
	return (0);
}
