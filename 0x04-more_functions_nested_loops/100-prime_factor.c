#include <stdio.h>
#include <math.h>

/**
 * main - primes
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int w = 612852475143, a = (int) sqrt(w);

	while (1)
	{
		if (w % a == 0)
		{
			printf("%lu \n", w / a);
			break;
		}
		a--;
	}
	return (0);
}
