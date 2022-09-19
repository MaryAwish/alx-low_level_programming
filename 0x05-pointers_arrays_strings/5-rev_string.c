#include "main.h"

/**
 * rev_string - reverses string
 *
 * @s: the string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int len, j, k;
	char n1, n2;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	j = len - 1;
	k = 0;

	while (j > k)
	{
		n1 = s[k];
		n2 = s[j];
		s[k] = n2;
		s[j] = n1;
		j--;
		k++;
	}
}
