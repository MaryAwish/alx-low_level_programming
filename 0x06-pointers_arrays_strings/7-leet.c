#include "main.h"

/**
 * leet - encodes a string
 *
 * @s: string
 * Return: Always successful
 */

char *leet(char *s)
{
	int i, j;
	char s1[] = "aeotl";
	char s2[] = "AEOTL";
	char s3[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == s1[j] || s[i] == s2[j])
			{
				s[i] = s3[j];
				break;
			}
		}
	}
	return (s);
}
