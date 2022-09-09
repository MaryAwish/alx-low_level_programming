#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - prints both upper and lowercase letters
 *
 * Return: 0 when successful
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);

	putchar('\n');
	return (0);
}
