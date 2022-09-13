#include "main.h"
/**
 * times_table - prints times table
 *
 * Return: always 0
*/

void times_table(void)
{
	int i = 0;
	int j;
	int mult;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			mult = i * j;

			if (j == 0)
			{
				_putchar(mult + '0');
			}
			else if (mult < 10)
			{
				_putchar(' ');
				_putchar(mult + '0');
			}
			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			j++;
		}
		_putchar('\n');
		i++;
	}
}
