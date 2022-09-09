#include <stdio.h>

/**
 * Description: main - prints a combination of 2 numbers = 17
 *
 * Return: 0 if successful
*/

int main(void)
{
	int a;
	int b = 0;

	while (b < 10)
	{
		a = 0;
		while (a < 10)
		{
			if (b != a && b < a)
			{
				putchar('0' + b);
				putchar('0' + a);

				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			a++;
		}
		b++;
	}

	putchar('\n');
	return (0);
}
