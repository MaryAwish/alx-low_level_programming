#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - prints alphabets
 *
 * Return: 0 when successful
*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	return (0);
}
