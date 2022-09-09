#include <stdio.h>
/**
 * Description: main - prints numbers
 *
 * Return: 0 is successful
*/

int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		putchar((d % 10) + '0');
		if (d == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
