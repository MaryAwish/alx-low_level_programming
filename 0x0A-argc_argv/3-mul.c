#include <stdio.h>
#include <stdlib.h>

/**
 * main - does multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int x, y, mult;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mult = x * y;

	printf("%d\n", mult);
	return (0);
}
