#include <stdio.h>
/**
 * main - prints the fibonacci sequence of 1st 50 numbers
 *
 * Return: Always 0
*/

int main(void)
{
	int k;
	long int t1 = 0, t2 = 1, sum;

	for (k = 0; k <= 50; k++)
	{
		sum = t1 + t2;
		printf("%ld", t2);

		t1 = t2;
		t2 = sum;

		if (k == 50)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
