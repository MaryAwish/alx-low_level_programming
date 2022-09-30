#include <stdio.h>

/**
 * main - prints the number of arguments passed
 *
 * @argc: the numberof arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
