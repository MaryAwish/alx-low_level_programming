#include <stdio.h>

/**
 * Description: main - prints single digit base 10 numbers
 *
 * Return: 0 if successful
*/

int main(void)
{
	int x = 0;

	for (x = 0; x <= 9; x++)
		printf("%d", x);

	printf("\n");
	return (0);
}
