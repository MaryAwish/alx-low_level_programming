#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Description: main -prints text
 *
 * Returns: Always (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);

	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n);

	}
	else if (n < 6 && n != 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	return (0);

}
