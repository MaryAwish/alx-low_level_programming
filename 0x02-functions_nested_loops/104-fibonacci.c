#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: Always 0
*/

int main(void)
{
	long int i, f = 1, a = 2, l = 1000000000, f1, f2, a1, a2;

	printf("%ld", f);

	for (i = 1; i < 91; i++)
	{
		printf(", %ld", a);
		a += f;
		f = a - f;
	}

	f1 = (f / l);
	f2 = (f % l);
	a1 = (a / l);
	a2 = (a % l);

	for (i = 92; i < 99; i++)
	{
		printf(", %ld", a1 + (a2 / l));
		printf("%ld", a2 % l);
		a1 = a1 + f1;
		f1 = a1 - f1;
		a2 = a2 + f2;
		f2 = a2 - f2;
	}
	printf("\n");
	return (0);
}
