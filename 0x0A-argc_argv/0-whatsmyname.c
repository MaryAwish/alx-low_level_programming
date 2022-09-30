#include <stdio.h>

/**
 * main - the function
 * @argc: the number of command line arguments
 * @argv: contains the program command line arguments
 * Return: ALways 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
