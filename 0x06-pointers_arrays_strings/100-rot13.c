#include "main.h"

/**
 * rot13 - encodes in rot13
 *
 * @s: string
 * Return: Always successful
 */

char *rot13(char *s)
{
	int i, j;
	char inp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 54; j++)
		{
			if (s[i] == inp[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
