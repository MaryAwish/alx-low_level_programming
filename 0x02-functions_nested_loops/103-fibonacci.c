#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of fibonacci
 *
 * Return: always 0
*/

int main(void)
{
	long int sum = 2, t1 = 0, t2 = 1, k;

	while (1)
	{
		sum = t1 + t2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
		{
			k += sum;
		}

		t1 = t2;
		t2 = sum;
	}
	printf("%ld\n", k);
	return (0);
}
