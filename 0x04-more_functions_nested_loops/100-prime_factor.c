#include <stdio.h>
#include <math.h>

/**
 * main - primes
 *
 * Return: Always 0
 */

int main(void)
{
	long int w, f, i;

	w = 612852475143;
	f = -1;

	while (w % 2 == 0)
	{
		f = 2;
		w = w / 2;
	}
	for (i = 3; i <= w / 2; i = i + 2)
	{
		while (w % i == 0)
		{
			f = i;
			w = w / i;
		}
	}
	if (w > 2)
	{
		f = w;
	}
	printf("%ld\n", f);
	return (0);
}
