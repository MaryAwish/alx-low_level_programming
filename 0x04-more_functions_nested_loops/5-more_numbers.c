#include "main.h"

/**
 * more_numbers - prints numbers x 10
 *
 * Return: Always 0
*/

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		i = 0;

		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
