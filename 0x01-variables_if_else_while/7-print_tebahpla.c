#include <stdio.h>

/**
 * Description: main - prints alphabets
 *
 * Return: 0 if successful
*/

int main(void)
{
	char af = 'z';

	for (af = 'z'; af >= 'a'; af--)
	{
		putchar(af);
	}
	putchar('\n');
	return (0);
}
