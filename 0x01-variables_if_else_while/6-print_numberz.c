#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - prints integers using putchar()
 *
 * Return: 0 when successful
*/

int main(void)
{
	int y = 0;

	for (y = 0; y <= 9; y++)
	{
		putchar(y);
	}

	putchar('\n');
	return (0);
}
