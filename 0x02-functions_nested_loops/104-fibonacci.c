#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: Always 0
*/

int main(void)
{
	long int i, t1 = 1, t2 = 2, sum = 0;

	for (i = 1; i < 98; i++)
	{
		printf("%ld, ", t1);
		sum = t1 + t2;
		t1 = t2;
		t2 = sum;

		if (i == 97)
		{
			printf("%ld\n", t1);
		}
	}
	return (0);
}
