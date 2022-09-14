#include <stdio.h>
/**
 * main - prints the fibonacci sequence of 1st 50 numbers
 *
 * Return: Always 0
*/

int main(void)
{
	int count = 3;
	long int t1 = 1, t2 = 2;
	long int sum = t1 + t2;

	printf("%ld, ", t1);
	printf("%ld, ", t2);

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%ld\n", sum);
		}
		else
		{
			printf("%ld, ", sum);
		}

		t1 = t2;
		t2 = sum;

		sum = t1 + t2;
		count++;
	}
	return (0);
}
