#include <stdio.h>
#include <unistd.h>

/**
 * Description: main - -prints out a string stdio
 *
 * Return: 1 if successful
*/

int main(void)

{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
