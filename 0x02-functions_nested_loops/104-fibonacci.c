#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: Always 0
*/

int main(void)
{
	unsigned long int a, b, c, b1, b2, c1, c2;
	b = 1;
	c = 2;

	printf("%lu, ", b);

	for (a = 1; a < 91; a++)
	{
		printf("%lu, ", c);

		c = c + b;
		b = c - b;
	}
	b1 = b / 1000000000;
	b2 = b % 1000000000;
	c1 = c / 1000000000;
	c2 = c % 1000000000;

	for (a = 92; a < 99; a++)
	{
		printf("%lu, ", c1 + (c2 / 1000000000));
		printf("%lu", c2 % 1000000000);

		c1 = c1 + b1;
		b1 = c1 - b1;
		c2 = c2 + b2;
		b2 = c2 - b2;
	}

	printf("\n");
	return (0);
}
