#include "main.h"

/**
 * cap_string - capitalizes words of a string
 *
 * @s: string
 * Return: Always successful
 */

char *cap_string(char *s)
{
	int i;
	char w[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i - 1] == *w) && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
		}
		else if (s[0] >= 97 && s[0] <= 122)
			s[0] -= 32;
		else
			s[i] = s[i];
	}
	return (s);
}
