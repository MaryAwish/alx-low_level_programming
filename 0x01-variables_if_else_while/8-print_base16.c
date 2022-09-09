#include <stdio.h>

/**
 * Description: main - prints hexadecimal numbers
 *
 * Return: 0 when success
*/

int main(void)
{
	int b;
	char x;

	for (b = 0; b < 10; b++)
	{
		putchar((b % 10) + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
