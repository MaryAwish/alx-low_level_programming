#include "main.h"
#include <stdlib.h>

/**
 * count_word - counts words
 * @s: string
 * Return: always sucessful
 */

int count_word(char *s)
{
	int f, c, w;

	f = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - splits 2 strings
 * @str: string
 * Return: If unsuccessful return NULL
 */

char **strtow(char *str)
{
	char **mat, *tmp;
	int i, k = 0, len = 0, w, c = 0, st, en;

	while (*(str + len))
		len++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (w + 1));
	if (mat == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				en = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (st < en)
					*tmp++ = str[st++];
				*tmp = '\0';
				mat[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			st = i;
	}
	mat[k] = NULL;
	return (mat);
}
