#include <stdio.h>

/**
 * Description: main - prints combination of 3 numbers
 *
 * Return: 0 if successful
*/

int main(void)
{
	int m, n, o;

	for (m = 0; m < 8; m++)
	{
		for (n = m + 1; n < 9; n++)
		{
			for (o = n + 1; o < 10; o++)
			{
				putchar((m % 10) + '0');
				putchar((n % 10) + '0');
				putchar((o % 10) + '0');

				if (m == 7 && n == 8 && o == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
