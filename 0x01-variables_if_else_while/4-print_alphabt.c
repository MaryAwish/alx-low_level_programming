#include <stdio.h>

/**
 * Description: main - Printing letters except q and e
 *
 * Return: 0 when success
*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' &&ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar('\n');
	return (0);
}
